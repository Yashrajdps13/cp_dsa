#include <iostream>
#include<vector>
using namespace std;
bool unique(vector<int> t,vector<vector<int>> b){
    if(b.size()==0){
        return true;
    }
    for(int i=0;i<b.size();i++){
        if(b[i]==t){
            return false;
        }
    }
    return true;
}
void subs(vector<vector<int>> &b,vector<int> t,int a[],int i,int k,int n){
    if(i==k){
        if(k==0){
            for(auto k: t){
                cout<<k<<" ";
            }
            cout<<"\n";
        }
    }
    if(a[i]<=k){
        t.push_back(a[i]);
        subs(b,t,a,i+1,k-a[i],n);
        t.pop_back();
    }
    subs(b,t,a,i+1,k,n);
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> b;
    vector<int> t;
    subs(b,t,a,0,k,n); 
}
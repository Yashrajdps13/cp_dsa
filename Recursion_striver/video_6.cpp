#include <iostream>
#include <vector>
using namespace std;
void subs(vector<int> &b,int a[],int i,int n){
    if(i==n){
        if(b.empty()){
            cout<<"NULL\n";
            return;
        }else{
        for(auto k:b){
            cout<<k<<" ";
        }
        cout<<"\n";
        return;
        }
    }
    b.push_back(a[i]);
    subs(b,a,i+1,n);
    b.pop_back();
    subs(b,a,i+1,n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b;
    subs(b,a,0,n);
}
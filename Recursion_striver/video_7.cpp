#include <iostream>
#include <vector>
using namespace std;
int count;
int sum(vector<int> b){
    int s=0;
    for(auto k: b){
        s+=k;
    }
    return s;
}
void subs(vector<int> &b,int a[],int i,int n,int k){
    if(i==n){
        if(sum(b)==k){
            count++;
        }
        return;
    }
    b.push_back(a[i]);
    subs(b,a,i+1,n,k);
    b.pop_back();
    subs(b,a,i+1,n,k);
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b;
    subs(b,a,0,n,k);
    cout<<count;
}
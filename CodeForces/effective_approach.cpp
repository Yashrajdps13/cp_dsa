#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> mpp;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mpp[a[i]]=i+1;
    }
    int t;
    cin>>t;
    long long v=0,p=0;
    while(t--){
        int q;
        cin>>q;
        v+=mpp[q];
        p+=(n+1-mpp[q]);
    }
    cout<<v<<" "<<p;
}
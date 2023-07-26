#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int maxx(vector<int> &x){
    int m=0;
    for(int i=0;i<x.size();i++){
        m=max(m,x[i]);
    }
    return m;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        unordered_map<int,int> mppa;
        unordered_map<int,int> mppb;
        int count=1;
        for(int i=1;i<=n;i++){
            if(i==n){
                mppa[a[i-1]]=max(count,mppa[a[i-1]]);
                break;
            }
            if(a[i]==a[i-1]){
                count++;
            }else{
                mppa[a[i-1]]=max(count,mppa[a[i-1]]);
                count=1;
            }
        }
        count=1;
        for(int i=1;i<=n;i++){
            if(i==n){
                mppb[b[i-1]]=max(count,mppb[b[i-1]]);
                break;
            }
            if(b[i]==b[i-1]){
                count++;
            }else{
                mppb[b[i-1]]=max(count,mppb[b[i-1]]);
                count=1;
            }
        }
        int maxlen=0;
        for(auto k:a){
            maxlen=max(maxlen,mppa[k]+mppb[k]);
        }
        for(auto k:b){
            maxlen=max(maxlen,mppa[k]+mppb[k]);
        }
        cout<<maxlen<<"\n";
    }
}

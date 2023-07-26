#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=n-1;
    unordered_map<int,vector<int>> mpp;
    for(int i=2;i<=k+1;i++){
        int a;
        cin>>a;
        mpp[a].push_back(i);
        mpp[i].push_back(a);
    }
    // for(auto k: mpp){
    //     cout<<k.first<<"  { ";
    //     for(auto k1:k.second){
    //         cout<<k1<<" ";
    //     }
    //     cout<<"}\n";;
    // }
    bool spruce=true;
    for(auto k:mpp){
        if(k.second.size()!=1){
            int count=0;
        for(auto k1: k.second){
            if(mpp[k1].size()==1) count++;
        }
        if(count<=2) spruce=false;
    }
    }
    if(spruce) cout<<"Yes";
    else cout<<"No";
}

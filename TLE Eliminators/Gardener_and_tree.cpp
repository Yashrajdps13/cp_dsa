#include <iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> edges(n+1,vector<int>());
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    vector<bool> operated(n+1,true);//boolean vector to check if the node exists in tree
    vector<int> degree(n+1);//degree of each node;
    vector<int> v;//vector consisting of leaf nodes
    for(int i=1;i<=n;i++){
        degree[i]=edges[i].size();//initializing degree of each node
        if(degree[i]<=1){
            v.push_back(i);//finding leaf nodes
        }
    }
    while(k--){
        vector<int> newleaf;
        for(int i=0;i<v.size();i++){
            operated[v[i]]=false;//updating after operation
            for(auto j:edges[v[i]]){
                degree[j]--;//updating degree of each node
                if(degree[j]==1) newleaf.push_back(j);//finding new leaf nodes
            }
        }
        v=newleaf;//updating the previous leaf node vector
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(operated[i]==true) ans++;
    }
    cout<<ans<<"\n";
 
}
}
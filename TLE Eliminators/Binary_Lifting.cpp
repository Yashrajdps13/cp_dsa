#include<bits/stdc++.h>
using namespace std;
void dfs(int currentNode,vector<vector<int>> &edges,int parent,vector<int> &parents1){
    parents1[currentNode]=parent;
    for(int neighbour: edges[currentNode]){
        if(neighbour!=parent){
            dfs(neighbour,edges,currentNode,parents1);
        }
    }
}
int kthParent(vector<vector<int>> &parents,int k,int x){
    int n=parents[0].size();
    for(int i=0;i<=log2(n);i++){
        if(k&(1<<i)){
            x=parents[i][x];
            if(x==-1) break;
        }
    }
    return x;
}
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<vector<int>> edges(n+1,vector<int>());
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    vector<vector<int>> parents(log2(n)+1,vector<int> (n+1,-1));
    dfs(1,edges,-1,parents[0]);
    for(int k=1;k<log2(n)+1;k++){
        for(int i=1;i<=n;i++){
            int intermediate=parents[k-1][i];
           if(intermediate!=-1) parents[k][i]=parents[k-1][intermediate];
        }
    }
    cout<<kthParent(parents,k,x);
    // for(int i=0;i<=n;i++){
    //     cout<<parents[0][i]<<" ";
    // }
}
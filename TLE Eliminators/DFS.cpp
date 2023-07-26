#include <bits/stdc++.h>
using namespace std;
void dfs(int currentNode,vector<vector<int>> &edges, int parent,vector<int>&levels,int currentLevel){
    levels[currentNode]=currentLevel;
    cout<<currentNode<<" ";
    for(int neighbour: edges[currentNode]){
        if(neighbour!=parent){
            dfs(neighbour,edges,currentNode,levels,currentLevel+1);
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> edges(n+1,vector<int>());
    vector<int> levels(n+1);
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    dfs(1,edges,0,levels,0);
}

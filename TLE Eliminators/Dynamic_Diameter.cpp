#include <iostream>
#include<vector>
#include<queue>
using namespace std;
void dfs(int currentNode,vector<vector<int>> &edges,int parent,vector<int> &levels,int currentLevel){
    levels[currentNode]=currentLevel;
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
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    vector<int> levels(n+1,0);;
    dfs(1,edges,-1,levels,0);
    int y=-1;
    int maxl=-1;
    for(int i=1;i<levels.size();i++){
        if(levels[i]>maxl){
            maxl=levels[i];
            y=i;
        }
    }
    vector<int> levels1(n+1,0);
    dfs(y,edges,-1,levels1,0);
    int diameter=0;
    int z=-1;
    for(int i=1;i<levels1.size();i++){
        if(levels1[i]>diameter){
            diameter=levels1[i];
            z=i;
        }
    }
    vector<int> levels2(n+1,0);
    dfs(z,edges,-1,levels2,0);
    for(int i=1;i<=n;i++){
        if(levels1[i]==diameter||levels2[i]==diameter){
            cout<<diameter+1<<" ";
        }else{
            cout<<diameter<<" ";
        }
    }
}
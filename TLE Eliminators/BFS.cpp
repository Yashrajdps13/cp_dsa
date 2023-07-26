#include <iostream>
#include<vector>
#include<queue>
using namespace std;
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
    vector<int> bfs;
    vector<bool> visited(n+1,false);
    queue<int> qu;
    int root=1;
    qu.push(root);
    visited[1]=true;
    while(!(qu.empty())){
        int currentNode=qu.front();
        bfs.push_back(currentNode);
        qu.pop();
        for(int negihbour:edges[currentNode]){
            if(!visited[negihbour]){
                visited[negihbour]=true;
                qu.push(negihbour);
            }
        }
    }
    for(int i=0;i<bfs.size();i++){
        cout<<bfs[i]<<" ";
    }
}
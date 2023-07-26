#include<bits/stdc++.h>
using namespace std;
void dfs(int currentNode,vector<vector<int>> &edges,int parent,vector<int> &inTime,vector<int> &outTime,int &globalTime){
    inTime[currentNode]=globalTime++;
    for(int neighbour: edges[currentNode]){
        if(neighbour!=parent){
            dfs(neighbour,edges,currentNode,inTime,outTime,globalTime);
        }
    }
    outTime[currentNode]=globalTime++;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> edges(n+1,vector<int>());
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    vector<int> inTime(n+1,-1);
    vector<int> outTime(n+1,-1);
    int globalTime=1;
    dfs(1,edges,0,inTime,outTime,globalTime);;

    for(int i=1;i<=n;i++){
        cout<<inTime[i]<<" "<<outTime[i]<<"\n";;
    }
}
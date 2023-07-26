#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void dfs(int currentNode,unordered_map<int,vector<int>> &mpp,int parent){
    cout<<currentNode<<" ";
    for(int n: mpp[currentNode]){
        if(n!=parent){
            dfs(n,mpp,currentNode);
        }
    }
}
void l(int currentNode,unordered_map<int,vector<int>> &dp,int parent,vector<int> &level,int Totallevel){
    level.push_back(Totallevel);
    for(int neighbour: dp[currentNode]){
        if(neighbour!=parent){
            l(neighbour,dp,currentNode,level,Totallevel+1);
        }
    }
}
int main() {
    int n;
    cin>>n;
    unordered_map<int,vector<int>> mpp;
    for(int i=1;i<=n;i++){
        int p;
        cin>>p;
        mpp[p].push_back(i);
    }
    //dfs(-1,mpp,-2);
    
    vector<int> level;
    l(-1,mpp,-2,level,0);
    int maxx=0;
    for(int i=0;i<level.size();i++){
        maxx=max(maxx,level[i]);
    }
    cout<<maxx;
}

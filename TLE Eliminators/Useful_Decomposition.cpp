#include <iostream>
#include<vector>
using namespace std;
bool check=true;
void dfs(int currentNode,vector<vector<int>> &edges,int parent,int root){
    if(currentNode!=root){
        if(edges[currentNode].size()>2){
            check=false;
            return;
        }
    }
    for(auto neighbour: edges[currentNode]){
        if(!check) return;
        if(neighbour!=parent){
            dfs(neighbour,edges,currentNode,root);
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
    int maxx=0;
    int node=-1;
    for(int i=1;i<n+1;i++){
        // cout<<i<<" ";
        // for(int j=0;j<edges[i].size();j++){
        //     cout<<edges[i][j]<<" ";
        // }
        // cout<<"\n";
        int l=edges[i].size();
        if(l>maxx){
            maxx=l;
            node=i;
        }
    }
    dfs(node,edges,-1,node);
    if(!check){
        cout<<"No";
    }else{
        vector<int> ans;
        for(int i=1;i<=n;i++){
            int l=edges[i].size();
            if(l==1&&i!=node){
                ans.push_back(i);
            }
        }
        cout<<"Yes\n";
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++){
            cout<<node<<" "<<ans[i]<<"\n";;
        }
    }

}

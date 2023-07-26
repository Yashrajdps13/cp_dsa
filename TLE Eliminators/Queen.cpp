#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
void dfs(int currentNode,vector<vector<int>> &edges,int parent,vector<int> &c,int root,vector<vector<int>> &children){
    if(currentNode!=root){
        if(c[currentNode]==1){
            bool check=false;
            for(int child: children[currentNode]){
                if(c[child]!=1){
                    check=true;
                    break;
                }
            }
            if(!check){
                ans.push_back(currentNode);
            }
        }
    }
    for(int neighbour: edges[currentNode]){
        if(neighbour!=parent){
            dfs(neighbour,edges,currentNode,c,root,children);
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> children(n+1,vector<int>());
    vector<vector<int>> edges(n+1,vector<int>());
    vector<int> parent(n+1);
    vector<int> c(n+1,-1);
    int root=-1;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x>>c[i];
        if(x!=-1) children[x].push_back(i);
        else children[0].push_back(i);
        if(x!=-1){
            edges[i].push_back(x);
            edges[x].push_back(i);
        }else{
            edges[i].push_back(x);
            root=i;
        }
    }
    dfs(root,edges,-1,c,root,children);
    if(ans.size()==0) cout<<-1;
    else{
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
}
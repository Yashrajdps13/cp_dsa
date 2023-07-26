#include <iostream>
#include<vector>
using namespace std;
bool ans=true;
bool ans1=true;
void dfs(vector<vector<int>> &edges,vector<int> &colors,int currentNode,int parent,int root){
    if(!ans) return;
    if(parent!=root and parent!=-1){
        if(colors[currentNode]!=colors[parent]){
            ans=false;
            return;
        }
    }

    for(auto neighbour: edges[currentNode]){
        if(!ans) return;
        if(neighbour!=parent){
            dfs(edges,colors,neighbour,currentNode,root);
        }
    }
}
void dfs1(vector<vector<int>> &edges,vector<int> &colors,int currentNode,int parent,int root){
    if(!ans1) return;
    if(parent!=root and parent!=-1){
        if(colors[currentNode]!=colors[parent]){
            ans1=false;
            return;
        }
    }

    for(auto neighbour: edges[currentNode]){
        if(!ans1) return;
        if(neighbour!=parent){
            dfs1(edges,colors,neighbour,currentNode,root);
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> edges(n+1);//tree
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    vector<int> colors(n+1);//colors vector
    for(int i=1;i<n+1;i++){
        cin>>colors[i];
    }
    vector<int> pos;
    for(int i=1;i<=n;i++){
        for(int j=0;j<edges[i].size();j++){
            if(colors[i]!=colors[edges[i][j]]){
                pos.push_back(i);
                pos.push_back(edges[i][j]);
                break;
            }
        }
    }

    if(pos.size() == 0){
        cout<<"YES\n";
        cout<<1<<endl;
        return 0;
    }
    dfs(edges,colors,pos[0],-1,pos[0]);//dfs for first node
    if(ans){
        cout<<"YES\n";
        cout<<pos[0];
    }else{
        dfs1(edges,colors,pos[1],-1,pos[1]);//dfs for second node
        if(ans1){
            cout<<"YES\n";
            cout<<pos[1];
        }else{
            cout<<"NO";
        }
    }

}
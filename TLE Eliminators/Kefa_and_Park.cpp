#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void dfs(int currentNode,unordered_map<int,vector<int>> mpp,int parent){
    cout<<currentNode<<" ";
    for(int n:mpp[currentNode]){
        if(n!=parent){
            dfs(n,mpp,currentNode);
        }
    }
}


void transversal(int currentNode,unordered_map<int,vector<int>> mpp,vector<int> &cats,vector<int> &res,int parent,int consCats){
    
    if(consCats==0) return;
    if(mpp[currentNode].size()==1){
        res.push_back(currentNode);
    }
    for(int n:mpp[currentNode]){
        if(n!=parent){
            if(cats[currentNode]==1){
                transversal(n,mpp,cats,res,currentNode,consCats-1);
            }else{
                transversal(n,mpp,cats,res,currentNode,consCats);
            }
        }
    }
}


int main(){
    int n,m;
    cin>>n>>m;
    int k=n-1;
    vector<int> cats(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>cats[i];
    }
    unordered_map<int,vector<int>> mpp;
    for(int i=1;i<=k;i++){
        int a,b;
        cin>>a>>b;
        mpp[a].push_back(b);
        mpp[b].push_back(a);
    }
    vector<int> res;
    transversal(1,mpp,cats,res,-1,m);
    for(auto k:res){
        cout<<k<<" ";
    }
}
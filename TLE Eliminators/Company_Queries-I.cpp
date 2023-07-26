#include<bits/stdc++.h>
using namespace std;
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
    int n,q;
    cin>>n>>q;
    vector<vector<int>> parents(log2(n)+1,vector<int>(n+1,-1));
    vector<vector<int>> edges(n+1,vector<int>());
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        parents[0][i+2]=x;
    }
    vector<vector<int>> queries(q,vector<int>(2,-1));
    for(int i=0;i<q;i++){
        cin>>queries[i][0]>>queries[i][1];
    }
    for(int k=1;k<log2(n)+1;k++){
        for(int i=1;i<=n;i++){
            int intermediate=parents[k-1][i];
            if(intermediate!=-1) parents[k][i]=parents[k-1][intermediate];
        }
    }

    for(int i=0;i<q;i++){
        cout<<kthParent(parents,queries[i][1],queries[i][0])<<"\n";
    }
}
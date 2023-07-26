#include <bits/stdc++.h>

using namespace std;
int mod=1000000000+7;
int solve(vector<vector<int>> &dp,vector<vector<int>> &a,int i,int j){
    if(i==0&&j==0){
        return 1;
    }
    if(i<0||j<0){
        return 0;
    }
    if(a[i][j]==-1){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=(solve(dp,a,i-1,j)+solve(dp,a,i,j-1))%mod;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<vector<int>> a(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        vector<vector<int>> dp(m,vector<int>(n,-1));
        cout<<solve(dp,a,m-1,n-1)<<"\n";
    }
}
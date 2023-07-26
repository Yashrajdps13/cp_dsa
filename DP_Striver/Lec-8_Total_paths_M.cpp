#include<iostream>
#include<vector>
using namespace std;
int solve(vector<vector<int>> &dp,int i,int j){
    if(i==0&&j==0){
        return 1;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int left=0,right=0;
    if(i>0){
        left=solve(dp,i-1,j);
    }
    if(j>0){
        right=solve(dp,i,j-1);
    }
    return dp[i][j]=left+right;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        cout<<solve(dp,m-1,n-1)<<"\n";
    }
}
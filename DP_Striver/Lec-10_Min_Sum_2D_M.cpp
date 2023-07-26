#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int solve(vector<vector<int>> &dp,vector<vector<int>> &a,int i,int j){
    if(i==0&&j==0){
        return a[0][0];
    }
    if(dp[i][j]!=-1) return dp[i][j];
    long up=INT_MAX,left=INT_MAX;
    if(i>0) up=solve(dp,a,i-1,j)+a[i][j];
    if(j>0) left=solve(dp,a,i,j-1)+a[i][j];
    return dp[i][j]=min(up,left);;
}
int main() {
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

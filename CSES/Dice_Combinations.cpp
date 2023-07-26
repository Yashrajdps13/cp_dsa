#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int solve(vector<vector<int>> &dp,vector<int> &dice,int sum,int i){
    if(sum==0) return 1;
    
    if(i<0) return 0;
    if(dp[sum][i]!=-1) return dp[sum][i];
    int nottake=solve(dp,dice,sum,i-1);
    int take=0;
    if(dice[i]<=sum) take=solve(dp,dice,sum-dice[i],5);
    return dp[sum][i]=(take+nottake)%mod;
}
int main(){
    int n;
    cin>>n;
    vector<int> dice={1,2,3,4,5,6};
    vector<vector<int>> dp(n+1,vector<int>(6,-1));;
    cout<<solve(dp,dice,n,5);
}
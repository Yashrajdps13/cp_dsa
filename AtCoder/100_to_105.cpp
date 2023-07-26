#include<bits/stdc++.h>
using namespace std;
bool solve(vector<vector<int>> &dp,vector<int> &prices,int target,int i){
    if(target==0) return true;
    if(target<0) return false;
    if(i<0) return false;
    if(dp[target][i]!=-1) return dp[target][i];
    bool nottake=solve(dp,prices,target,i-1);
    bool take=solve(dp,prices,target-prices[i],i);
    return dp[target][i]=take||nottake;
}
int main(){
    int n;
    cin>>n;
    vector<int> prices(6);
    for(int i=0;i<6;i++){
        prices[i]=100+i;
    }
    vector<vector<int>> dp(n+1,vector<int>(6,-1));
    cout<<solve(dp,prices,n,5);
}
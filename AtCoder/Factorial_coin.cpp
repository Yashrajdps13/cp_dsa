#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int solve(vector<vector<int>> &dp,vector<int> &a,int i,int sum){
    if(sum==0) return 0;
    else if(sum<0) return 1e9;
    if(i==0){
        if(sum%a[i]==0) return sum/a[i];
        else return 1e9;
    }
    if(dp[i][sum]!=-1) return dp[i][sum];
    int nottake=solve(dp,a,i-1,sum);
    int take=1e9;
    if(sum>=a[i]) take=1+solve(dp,a,i,sum-a[i]);
    return dp[i][sum]=min(take,nottake);
    
}
int main(){
    int T;
    cin>>T;
    vector<int> a(10);
    for(int i=0;i<10;i++){
        a[i]=fact(i+1);
    }
    vector<vector<int>> dp(10,vector<int>(T+1,0));
    // cout<<solve(dp,a,9,n);
    for(int j=0;j<T+1;j++){
        if(j%a[0]==0) dp[0][j]=j/a[0];
        else dp[0][j]=1e9;
    }
    for(int i=1;i<10;i++){
        for(int j=0;j<=T;j++){
            int nottake=dp[i-1][j];
            int take=1e9;
            if(j>=a[i]) take=1+dp[i][j-a[i]];
            dp[i][j]=min(take,nottake);
        }
    }
    cout<<dp[9][T];
}

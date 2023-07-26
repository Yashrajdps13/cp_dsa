#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> dp(n,vector<int>(x+1,0));
    // int ans=solve(dp,a,x,n-1);
    // if(ans>=1e9) cout<<-1;
    // else cout<<ans;
    for(int i=0;i<x+1;i++){
        if(i%a[0]==0) dp[0][i]=i/a[0];
        else dp[0][i]=INT_MAX;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=x;j++){
            int nottake=dp[i-1][j];
            int take=1e9;
            if(a[i]<=j) take=1+dp[i][j-a[i]];
            dp[i][j]=min(take,nottake);
        }
    }
    long ans=dp[n-1][x];
    if(ans>=1e9){
        cout<<-1;
    }else{
        cout<<ans;
    }
}

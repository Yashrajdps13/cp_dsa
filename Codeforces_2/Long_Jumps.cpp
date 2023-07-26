#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &dp,vector<int> &a,int i){
    if(i>=a.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    return dp[i]=a[i]+solve(dp,a,i+a[i]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxscore=-1;
        vector<int> dp(n,-1);
        for(int i=0;i<n;i++){
            maxscore=max(maxscore,solve(dp,a,i));
        }
        cout<<maxscore<<"\n";
    }
}
#include <iostream>
#include<vector>
using namespace std;
bool solve(vector<vector<int>> &dp,vector<int> &a,int i,int k){
    if(k==0) return true;
    if(i==0) return (k==a[0]);
    if(dp[i][k]!=-1) return dp[i][k];
    bool nottake=solve(dp,a,i-1,k);
    bool take=false;
    if(a[i]<=k) take=solve(dp,a,i-1,k-a[i]);
    return dp[i][k]=take||nottake;
}
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];sum+=a[i];
    }
    if(sum%2==1){
        cout<<false;
        return 0;
    }
    sum/=2;
    vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
    cout<<boolalpha;
    cout<<solve(dp,a,n-1,sum);;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
}

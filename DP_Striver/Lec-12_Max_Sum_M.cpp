#include <iostream>
#include<vector>
#include<climits>
using namespace std;
long solve(vector<vector<int>> &dp,vector<vector<int>> &a,int i,int j,int n,int m){
    if(i<0||j<0||j>=m){
        return -1e9;
    }
    if(i==n-1){
        return a[n-1][j];
    }
    if(dp[i][j]!=-1) return dp[i][j];
    long dl=solve(dp,a,i+1,j-1,n,m)+a[i][j];
    long d=solve(dp,a,i+1,j,n,m)+a[i][j];
    long dr=solve(dp,a,i+1,j+1,n,m)+a[i][j];
    return dp[i][j]=max(dl,max(d,dr));
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int> (m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                a[i][j]=x;
            }
        }
        long maxx=INT_MIN;
        for(int j=0;j<m;j++){
            vector<vector<int>> dp(n,vector<int> (m,-1));
            long c=solve(dp,a,0,j,n,m);
            maxx=max(maxx,c);
        }
        cout<<maxx<<"\n";
    }
}

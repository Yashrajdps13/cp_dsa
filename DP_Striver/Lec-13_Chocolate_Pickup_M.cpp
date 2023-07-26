#include <iostream>
#include<vector>
#include<climits>
using namespace std;
long solve(vector<vector<vector<int>>> &dp,vector<vector<int>> &a,int i,int j1,int j2,int n,int m){
    if(j1<0||j1>=m||j2<0||j2>=m){
        return -1e9;
    }
    if(i==n){
        return 0;
    }
    if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
    long maxx=INT_MIN;
    for(int del1=-1;del1<2;del1++){
        for(int del2=-1;del2<2;del2++){
            long cal;
            if(j1==j2) cal=a[i][j1]+solve(dp,a,i+1,j1+del1,j2+del2,n,m);
            else cal=a[i][j1]+a[i][j2]+solve(dp,a,i+1,j1+del1,j2+del2,n,m);
            maxx=max(maxx,cal);
        }
    }
    return dp[i][j1][j2]=maxx;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        cout<<solve(dp,a,0,0,m-1,n,m)<<"\n";
    }   
}

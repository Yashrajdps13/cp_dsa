#include <bits/stdc++.h> 
using namespace std;
int f(vector<vector<int>> &dp,int i,int j,vector<vector<int>> &triangle,int n){
	if(i==n-1){
		return triangle[i][j];
	}
	if(dp[i][j]!=-1) return dp[i][j];
	int d=triangle[i][j]+f(dp,i+1,j,triangle,n);
	int dg=triangle[i][j]+f(dp,i+1,j+1,triangle,n);
	return dp[i][j]=min(d,dg);
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	vector<vector<int>> dp(n,vector<int>(n,-1));
	return f(dp,0,0,triangle,n);
}
int main(){
    vector<vector<int>> triangle={{1},{2,3},{4,5,6},{7,8,9,10}};
    int n=4;
    cout<<minimumPathSum(triangle,n);
}

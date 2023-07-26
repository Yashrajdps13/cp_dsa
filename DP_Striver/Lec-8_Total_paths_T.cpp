#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<vector<int>> dp(m,vector<int>(n));
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i>0){
                    dp[i][j]+=dp[i-1][j];
                }
                if(j>0){
                    dp[i][j]+=dp[i][j-1];
                }
            }
        }
        cout<<dp[m-1][n-1]<<"\n";;
    }
}
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
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
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            dp[0][j]=a[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                long dr=a[i][j],dl=a[i][j],d=a[i][j];
                if(j<m-1) dr+=dp[i-1][j+1];
                else dr+=-1e9;
                if(j>0) dl+=dp[i-1][j-1];
                else dl+=-1e9;
                d+=dp[i-1][j];
                dp[i][j]=max(d,max(dl,dr));
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<m;i++){
            ans=max(ans,dp[n-1][i]);
        }
        cout<<ans<<"\n";
    }
}

#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n,0);
    for(int i=1;i<n;i++){
        int minn=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0) {
                int jump=dp[i-j]+abs(a[i]-a[i-j]);
                minn=min(minn,jump);
            }else{
                break;
            }
        }
        dp[i]=minn;
    }
    cout<<dp[n-1];
}

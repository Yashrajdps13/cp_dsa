#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n,0);
    int left,right;
    for(int i=1;i<n;i++){
        left=dp[i-1]+abs(a[i]-a[i-1]);
        right=INT_MAX;
        if(i>1) right=dp[i-2]+abs(a[i]-a[i-2]);
        dp[i]=min(left,right);
    }
    cout<<dp[n-1];
}


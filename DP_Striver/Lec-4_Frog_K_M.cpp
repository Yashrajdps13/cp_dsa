#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int jump(vector<int> &dp,int a[],int n,int k){
    if(n<1){
        return 0;
    }
    if(dp[n]!=-1) return dp[n];
    int minn=INT_MAX;
    for(int i=1;i<=k;i++){
        int l=jump(dp,a,n-i,k)+abs(a[n]-a[n-i]);
        minn=min(l,minn);
    }
    return dp[n]=minn;
}

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n+1,-1);
    cout<<jump(dp,a,n-1,k);
}

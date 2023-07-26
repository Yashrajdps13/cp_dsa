#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int frog(vector<int> &dp,int a[],int n){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1) return dp[n];
    int left,right;
    if(n>1){
        left=frog(dp,a,n-1)+abs(a[n]-a[n-1]);
        right=frog(dp,a,n-2)+abs(a[n]-a[n-2]);
    }else if(n==1){
        left=frog(dp,a,n-1)+abs(a[n]-a[n-1]);
        right=INT_MAX;
    }
    return dp[n]=min(left,right);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<int> dp(n+1,-1);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<frog(dp,a,n-1)<<"\n";
    }

}


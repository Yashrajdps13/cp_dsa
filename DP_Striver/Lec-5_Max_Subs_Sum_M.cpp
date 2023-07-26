#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int subs(vector<int> &dp,int a[],int n){
    if(n==0){
        return a[0];
    }else if(n<0){
        return 0;
    }
    if(dp[n]!=-1) return dp[n];
    int pick=a[n]+subs(dp,a,n-2);
    int notpick=0+subs(dp,a,n-1);
    return dp[n]=max(pick,notpick);
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n+1,-1);
    cout<<subs(dp,a,n-1);
}

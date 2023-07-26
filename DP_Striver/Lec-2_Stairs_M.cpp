#include <iostream> 
#include<vector>
using namespace std;
int stairs(vector<int> &dp,int n) {
    if (n <= 1) {
        return 1;
    }
    if (dp[n] != -1) return dp[n];

    return dp[n] = stairs(dp, n - 1) + stairs(dp, n - 2);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> dp(n+1,-1);
        cout<<stairs(dp,n)<<"\n";;
    }
}
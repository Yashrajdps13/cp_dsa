#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}
/*
We use an array/vector: dp, which stores any calculation and use that in future calls
This method is call Tabulation(answers are stored in a table and used)
Tabulation is also called Bottom-Up, i.e. we start at base-case, and work our way up to the required answer
n<-n-1<-n-2<-.....<-2<-0,1{base case}
T.C: O(n)
S.C: O(n) {vector defined}
We store the base values i.e. 0,1 and keep adding values of i-1 and i-2 to get the value at ith index
*/
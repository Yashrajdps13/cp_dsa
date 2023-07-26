#include <iostream>
#include<vector>
using namespace std;
int fib(vector<int> &dp,int n){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=fib(dp,n-1)+fib(dp,n-2);
}
int main() {
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fib(dp,n);
}
/*
We use an array/vector: dp, which stores any calculation and use that in future calls
This method is call Memoization(answers are memorized in form of an array)
Memoization is also called Top-Down, i.e. we start at required answer, go till the base case, and then come back up
n->n-1->n-2->.......->0,1{base case}
n<-n-1<-n-2<-.....<-2<-0,1{base case}
T.C: O(n)
S.C: O(n)+O(n) {vector defined+stack space}
We first check if the value of that particular call in dp array is inserted or not, if no, then save it, else use it

In the statement return dp[n]=fib(dp,n-1)+fib(dp,n-2);, first fib(dp,n-1) is called, which in turn calls fib(dp,(n-1)-1), 
thus making n calls, ansd storing each value in dp
After that, in every call, the secondd term fib(dp,n-2) is always fetched from dp vector
*/
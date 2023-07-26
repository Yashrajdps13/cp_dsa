#include<bits/stdc++.h>
using namespace std;
long long solve(long long n){
    if(n==1) return 1;
    return 1+2*solve(n/2);
}
int main(){
    long long m;
    cin>>m;
    cout<<solve(m);
}
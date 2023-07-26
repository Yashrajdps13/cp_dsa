#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double m,n,a;
    cin>>n>>m>>a;
    long long q=ceil(m/a);
    long long p=ceil(n/a);
    long long ans=p*q;
    cout<<ans;
}
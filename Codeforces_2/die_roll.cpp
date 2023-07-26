#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=max(a,b);
    int d=6-c+1;
    int e=__gcd(d,6);
    cout<<d/e<<"/"<<6/e;
}
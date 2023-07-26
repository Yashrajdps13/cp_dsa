#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long e=a*b*c;
    long long d=pow(e,0.5);
    long long f=(d/a)+(d/b)+(d/c);
    cout<<4*f;
}
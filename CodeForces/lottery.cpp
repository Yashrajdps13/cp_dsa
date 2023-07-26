#include <iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=0;
    int b=n%100;
    int c=b%20;
    int d=c%10;
    int e=d%5;
    p=p+n/100+b/20+c/10+d/5+e;
    cout<<p;
}
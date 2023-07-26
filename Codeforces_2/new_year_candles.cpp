#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int p=0;
    int d=0;
    while(a>0){
        p+=a;
        a/=b;
        a+=(a/b);
    }
    cout<<p;
}
#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long t=2;
    long long b=0;
    while(n>0){
        if(n>=t){
            t*=2;
        }else{
            n-=(t/2);
            t=2;
            b++;
        }
    }
    cout<<b;
}
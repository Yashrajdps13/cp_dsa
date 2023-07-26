#include <iostream>
#include <cmath>
using namespace std;
int main(){

    long long int a;
    cin>>a;
    if(a%2==0){
        long long int b=a/2;
        cout<<b;
    }else{
        long long int b=-(1+a)/2;
        cout<<b;
    }
}
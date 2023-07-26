#include <iostream>
using namespace std;
bool isprime(int a){
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int i=n-4;
    while(i>0){
        int j=n-i;
        if(isprime(i)==0 && isprime(j)==0){
            cout<<i<<" "<<j;
            return 0;
        }
        i--;
    }
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k=2;
        while(k>0){
            long long d=(pow(2,k))-1;
            if(n%d==0){
                cout<<n/d<<"\n";
                break;
            }
            k++;
        }
    }
}
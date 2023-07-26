#include <iostream>
using namespace std;
long long sum(long long n){
    
    if(n==0){
        return 0;
    }
    long long i=n%10;
    return i+sum(n/10);
}
int main(){
    long long a;
    cin>>a;
    cout<<sum(a);
}
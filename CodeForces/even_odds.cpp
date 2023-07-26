#include <iostream>
using namespace std;
int main(){
    long long n,p;
    cin>>n>>p;
    if(p>(n+1)/2){
        cout<<(p-(n+1)/2)*2;
    }else{
        cout<<p*2-1;
    }
}
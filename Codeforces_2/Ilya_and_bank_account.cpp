#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        cout<<n;
    }else{
        int b=n/10;
        int c=n%10;
        int d=(n/100)*10+c;
        cout<<max(b,d);
    }
    return 0;
}
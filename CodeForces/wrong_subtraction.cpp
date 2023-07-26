#include <iostream>
using namespace std;
int main(){

    int a,b,r;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        r=a%10;
        if(r!=0){
            a-=1;
        }else{
            a/=10;
        }
    }
    cout<<a;
}
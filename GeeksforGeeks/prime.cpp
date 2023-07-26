#include <iostream>
using namespace std;
int prime(int a){
    int res=a/2;
    while(res>0){
        if(a%res==0){
            break;
        }
        res--;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    if(prime(n)!=1){
        cout<<"not prime";
    }else{
        cout<<"prime";
    }
}
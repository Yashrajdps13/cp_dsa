#include <iostream>
using namespace std;

bool palin(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==n){
        return "true";
    }else{
        return "false";
    }
}   
int main(){
    int t;
    cin>>t;
    cout<<palin(t);
}

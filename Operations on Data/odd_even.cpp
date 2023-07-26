#include <iostream>

using namespace std;
bool odd(int a){
    if(a%2==0){
        return false;
    }
    return true;
}

int main(){
    int c;
    cout<<"Enter your number ";
    cin>>c;
    if(odd(c)==0){
        cout<<c<<" is even";
    }else{
        cout<<c<<" is odd";
    }
}
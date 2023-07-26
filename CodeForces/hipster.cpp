#include <iostream>
using namespace std;

int minimum(int a,int b){
    if(a>b)
    return b;
    return a;
}
int maximum(int a,int b){
    if(a>b)
    return a;
    return b;
}

int main(){

    int a,b;
    cin>>a>>b;
    int d=minimum(a,b);
    int dm=maximum(a,b)-minimum(a,b);
    cout<<d<<" "<<dm/2;


}
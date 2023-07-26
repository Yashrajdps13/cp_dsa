#include <iostream>
using namespace std;
int level(int n,int i=1){
    int d=i*(i+1)/2;
    if(n/d==1){
        return i;
    }
    if(d>n){
        return i-1;
    }
    if(n==1 || n==2 || n==3){
        return 1;
    }
    else{
        return level(n-d,i+1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<level(n);
}
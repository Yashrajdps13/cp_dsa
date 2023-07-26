#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int p=n;
    int c=p;
    int x=0;
    while(c>0){
        x=x+c;
        c/=m;
    }
    if(x%m==0){
        x++;
    }
    cout<<x;
}
#include <iostream>
using namespace std;
int sum(int n){
    int s=0;
    int d=n;
    while(d>0){
        s=s+d%10;
        d/=10;
    }
    return s;
}
int prod(int n){
    int p=1;
    int d=n;
    while(d>0){
        p=p*(d%10);
        d/=10;
    }
    return p;
}
int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int a,b;
        cin>>a>>b;
        int test=0;
        for(int i=a;i<=b;i++){
            int x=prod(i);
            int y=sum(i);
            if(x%y==0){
                test++;
            }
        }
        cout<<"Case #"<<j<<": "<<test;
    }
    return 0;
}
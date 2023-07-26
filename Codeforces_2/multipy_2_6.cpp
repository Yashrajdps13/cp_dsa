#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b=n;
        int a=n;
        int p=0;
        int q=0;
        if(n==1){
        cout<<0<<"\n";
        }else{
        while(a%2==0){
            a/=2;
            q++;
        }
        while(b%3==0){
            b/=3;
            p++;
        }
        if(q>p){
            cout<<-1<<"\n";
        }else{
        int c=pow(2,q)*pow(3,p);
        int f=max(p,q)+abs(p-q);
        if(c==n){
            cout<<f<<"\n";
        }else{
            cout<<"-1\n";
        }
        }
        }
    }
}
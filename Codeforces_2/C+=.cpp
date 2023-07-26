#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int a=x,b=y;
        int p=0;
        while(p>=0){
            a+=b;
            p++;
            if(a>n){
                break;
            }
            b+=a;
            p++;
            if(b>n){
                break;
            }
        }
        int q=0;
        a=x;
        b=y;
        while(p>=0){
            b+=a;
            q++;
            if(b>n){
                break;
            }
            a+=b;
            q++;
            if(a>n){
                break;
            }
        }
        cout<<min(p,q)<<"\n";
    }
}
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int e=a+c;
        int p=0,q=0,r=0;
        if(e%(2*b)==0){
            p++;
        }
        int f=2*b-c;
        if(f%a==0 && f>0){
        q++;
        }
        int g=2*b-a;
        if(g%c==0 && g>0){
            r++;
        }
        if(p==0 && q==0 && r==0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }


    }
}
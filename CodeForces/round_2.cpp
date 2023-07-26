#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,c,d;
        cin>>a;
        int b=a;
        int p=0;
        int q=0;
        d=a;
        while(d>0){
            q++;
            d/=10;
        }
        while(b>0){
            if(b%10!=0){
                p++;
            }
            b/=10;
        }
        cout<<p<<endl;
        int i=0;
        while(a>0){
            if(a%10!=0){
            cout<<(a%10)*pow(10,i)<<" ";
            }
            a/=10;
            i++;
        }
    }
}
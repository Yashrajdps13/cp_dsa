#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q=0;
        cin>>n;
        if(n<2020){
            cout<<"NO\n";
        }else{
            while(n>0){
            if(n%2020==0 || n%2021==0){
                cout<<"YES\n";
                q++;
                break;
            }else{
                n-=2021;
            }
            }
            if(q==0){
                cout<<"NO\n";
            }
        }
    }
}
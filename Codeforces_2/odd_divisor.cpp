#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n;
       cin>>n;
       long long p=0;
       if(n%2==1){
        cout<<"YES"<<"\n";
        p++;
       }else{
        while(n>1){
            if(n%2==1){
                cout<<"YES"<<"\n";
                p++;
                break;
            }else{
                n/=2;
            }
        }
       }
       if(p==0){
        cout<<"NO"<<"\n";
       }
    }
}


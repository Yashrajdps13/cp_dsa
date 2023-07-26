#include <iostream>
using namespace std;
int main(){

    int t;
    long long a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if((b-a)%10==0){
            cout<<abs(b-a)/10<<endl;
        }else{
            cout<<1+abs(b-a)/10<<endl;
        }
    }
    
    return 0;
}
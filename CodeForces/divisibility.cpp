#include <iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    int a,b;
    int p=0;
    while(t--){
        cin>>a>>b;
        if(a%b!=0){
        cout<<b-a%b<<endl;
        }else{
            cout<<0<<endl;;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,c;
    int p=0;
    int s;
    while(t--){
        cin>>a>>b>>c;
        s=a+b+c;
        if(s>1){
            p++;
        }
    }
    cout<<p;
    return 0;
}
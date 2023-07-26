#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        if(n%x>=y){
            int b=(n/x)*x+y;
            cout<<b<<endl;
        }else{
            int c=((n/x)-1)*x+y;
            cout<<c<<endl;
        }
    }
    return 0;
}
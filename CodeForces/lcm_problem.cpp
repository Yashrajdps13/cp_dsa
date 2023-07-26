#include <iostream>
#include <numeric>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
    long long l,r;
    cin>>l>>r;
    int a=0,c=0;
    while(l<=r/2){
        for(long long b=l+1;b<=r;b++){
            if(lcm(l,b)<=r){
                a=l;
                c=b;
                break;
            }
        }
        l=l+1;
    }
    if(a==0){
        cout<<-1<<" "<<-1<<endl;
    }else{
        cout<<a<<" "<<c<<endl;
    }
    }
}
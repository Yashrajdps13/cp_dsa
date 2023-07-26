#include <iostream>
using namespace std;
int len(long long n){
    int l=0;
    while(n>0){
        l++;
        n/=10;
    }
    return l;
}
int main(){
    long long n,t;
    cin>>n>>t;
    long long ans=1;
    n--;
    long long t_1=t;
    if(len(t_1)>n){
        cout<<-1;
        return 0;
    }
    while(n--){
        ans*=10;
    }
    long long r=ans%t;
    r=t-r;
    cout<<ans+r;
}
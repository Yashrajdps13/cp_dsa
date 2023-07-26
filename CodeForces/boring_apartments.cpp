#include <iostream>
using namespace std;
int sum(int a,int p=0){
    int d=a+1;
    while(d--){
        p+=d;
    }
    return p;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int d=a;
        int p=0;
        while(d>0){
            d/=10;
            p++;
        }
        cout<<10*(a%10-1)+sum(p)<<endl;;
    }
}
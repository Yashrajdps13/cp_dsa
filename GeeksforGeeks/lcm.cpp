#include <iostream>
using namespace std;
int lcm(int a,int b){
    int res=max(a,b);
    while(res>0){
    if(res%a==0 && res%b==0){
        break;
    }
    res++;
}
    return res;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<lcm(m,n);
}
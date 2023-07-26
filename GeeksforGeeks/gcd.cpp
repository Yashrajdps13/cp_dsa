#include <iostream>
using namespace std;
int hcf(int a,int b){
    int res=min(a,b);
    while(res>0){
    if(a%res==0 && b%res==0){
        break;
    }
    res--;
    }
    return res;

}
int main(){
    int t,n;
    cin>>t;
    cin>>n;
    cout<<hcf(t,n);
}
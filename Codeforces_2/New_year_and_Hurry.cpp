#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int t=240;
    t-=k;
    int p=0;
    int i=1;
        while(t>=0 && i<=n){
            t=t-5*i;
            if(t<0){
                break;
            }
            p++;
            i++;
        }
    cout<<p;
    return 0;
}
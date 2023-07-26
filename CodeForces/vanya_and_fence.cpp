#include <iostream>
using namespace std;
int main(){

    int n,h;
    cin>>n>>h;
    int a[n];
    int p=0;
    int q=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>h){
            p++;
        }else{
            q++;
        }
    }
    cout<<p*2+q;

    return 0;
}
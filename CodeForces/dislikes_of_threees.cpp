#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[1666];
    for(int i=0;i<1666;i++){
        a[i]=i+1;
        if(a[i]%3==0 || a[i]%10==3){
            a[i]=6000;
        }
    }
    sort(a,a+1666);
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        cout<<a[b-1]<<endl;
    }
}
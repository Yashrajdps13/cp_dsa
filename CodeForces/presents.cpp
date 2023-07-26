#include <iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    int k;
    int a[t+1];
    for(int i=1;i<=t;i++){
        cin>>k;
        a[k]=i;
    }
    for(int i=1;i<=t;i++)
    {
        cout<<a[i]<<" ";
    }


}
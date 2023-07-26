#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=a[n-1];;
    cout<<l<<" ";
    for(int i=n-2;i>=0;i--){
        if(a[i]>l){
            cout<<a[i]<<" ";
            l=a[i];
        }
    }
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p=arr[0];
        int q=arr[n-1];
        int r=min(p,q);
        int vol=r*(n-2);
        for(int i=1;i<n-1;i++){
            vol-=arr[i];
        }
        if(vol<0){
            cout<<0<<"\n";
        }else{
            cout<<vol<<"\n";
        }
}
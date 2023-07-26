#include <iostream>
using namespace std;
int main(){
    int n=40;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    int low=0,high=n-1,ans=-1;
    while(low<=high){
        int t=(low+high)/2;
        if(t*t==n){
            ans=t;
            break;
        }
        else if(t*t>n){
            high=t-1;
        }else{
            low=t+1;
            ans=t;
        }   
    }
    cout<<ans;
}
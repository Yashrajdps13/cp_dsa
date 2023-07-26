#include <iostream>
using namespace std;
int peak(int a[],int low,int high,int n){
    if(low>high){
        return -1;
    }
    int t=low+(-low+high)/2;
    if((t==0||a[t]>=a[t-1])&&(t==n-1||a[t]>=a[t+1])){
        return a[t];
    }else{
        if(a[t]<=a[t-1]){
            high=t-1;
        }else{
            low=t+1;
        }
        return peak(a,low,high,n);
    }
    return -1;
}
int main(){
    int a[]={1,2};
    int n=2;
    cout<<peak(a,0,n,n);
}
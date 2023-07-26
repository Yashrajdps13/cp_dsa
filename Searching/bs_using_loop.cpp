#include <iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40,50,60,70,80,90};
    int k=30;
    int low=0;
    int ans=-1;
    int high=8;
    while(low<=high){
        int t=(low+high)/2;
        if(k==a[t]){
            ans=t;
            break;
        }else if(k<a[t]){
            high=t-1;
        }else{
            low=t+1;
        }
    }
    cout<<ans;
}
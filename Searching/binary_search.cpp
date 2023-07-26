#include <iostream>
using namespace std;
int location(int a[],int low,int high,int k){
    if(low>high){
        return -1;
    }
    int t=(low+high)/2;
    if(k==a[t]){
        return t;
    }else if(k<a[t]){
        return location(a,low,t-1,k);
    }else{
        return location(a,t+1,high,k);
    }
    return -1;
}
int main(){
    int a[]={10,20,30,40};
    int k=15;
    cout<<location(a,0,4,k);
}
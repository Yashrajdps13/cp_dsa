#include <iostream>
using namespace std;
int check(int a[],int t,int n){
    if(t==n){
        return t;
    }
    else if(a[t]!=a[t+1]){
        return t;
    }else{
        return check(a,t+1,n);
    }
}
int search(int a[],int low,int high,int k,int n){
    if(low>high){
        return -1;
    }
    int t=(low+high)/2;
    if(k==a[t]){
        return check(a,t,n);
    }else if(k<a[t]){
        return search(a,low,t-1,k,n);
    }else{
        return search(a,t+1,high,k,n);
    }
    return -1;
}
int main(){
    int a[]={10,15,20,20,40,40};
    int k=20;
    int n=5;
    cout<<search(a,0,5,k,n);
}
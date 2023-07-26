#include <iostream>
using namespace std;
int check(int a[],int t){
    if(t==0){
        return t;
    }
    if(a[t-1]){
        return check(a,t-1);
    }else{
        return t;
    }
}
int search(int a[],int low,int high,int n){
    if(low>high){
        return 0;
    }
    int t=(low+high)/2;
    if(a[t]==0){
        return search(a,t+1,high,n);
    }else{
        return n-check(a,t);
    }
    return 0;
}
int main(){
    int a[]={0,0,0,1,1,1,1,1,1};
    int n=9;
    cout<<search(a,0,n,n);
}
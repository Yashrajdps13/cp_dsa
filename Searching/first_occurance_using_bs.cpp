#include <iostream>
using namespace std;
int check(int a[],int t){
    if(t==0){
        return t;
    }
    else if(a[t]!=a[t-1]){
        return t;
    }else{
        return check(a,t-1);
    }
}
int search(int a[],int low,int high,int k){
    if(low>high){
        return -1;
    }
    int t=(low+high)/2;
    if(k==a[t]){
        return check(a,t);
    }else if(k<a[t]){
        return search(a,low,t-1,k);
    }else{
        return search(a,t+1,high,k);
    }
    return -1;
}
int main(){
    int a[]={15,15,15};
    int k=15;
    cout<<search(a,0,2,k);
}
#include <iostream>
using namespace std;
int check_1(int a[],int t){
    if(t==0){
        return t;
    }
    else if(a[t]!=a[t-1]){
        return t;
    }else{
        return check_1(a,t-1);
    }
}
int search_1(int a[],int low,int high,int k){
    if(low>high){
        return -1;
    }
    int t=(low+high)/2;
    if(k==a[t]){
        return check_1(a,t);
    }else if(k<a[t]){
        return search_1(a,low,t-1,k);
    }else{
        return search_1(a,t+1,high,k);
    }
    return -1;
}
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
    int a[]={10,20,20,20,30,30};
    int k=20;
    int occ=search(a,0,5,k,5)-search_1(a,0,5,k);
    if(occ==0){
        cout<<0;
    }else{
        cout<<occ+1;
    }
}
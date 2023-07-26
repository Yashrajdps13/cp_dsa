#include<iostream>
using namespace std;
int del(int a[],int n,int i){
    for(int j=i;j<n;j++){
        a[j]=a[j+1];
    }
    return n-1;
}
int main(){
    int a[]={12,13,14,15,16};
    del(a,5,3);
    for(auto i : a){
        cout<<i<<" ";
        i++;
    }
}
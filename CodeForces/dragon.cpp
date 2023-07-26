#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int k,l,m,n,d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    int a[d];
    int p=0;
    for(int i=1;i<=d;i++){
        a[i]=i;
        if(a[i]%k==0){
            a[i]=0;
        }
        if(a[i]%l==0){
            a[i]=0;
        }
        if(a[i]%m==0){
            a[i]=0;
        }
        if(a[i]%n==0){
            a[i]=0;
        }
        if(a[i]==0){
            p++;
        }
    }
    cout<<p;

    return 0;
}
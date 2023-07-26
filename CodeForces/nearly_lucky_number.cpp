#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    int p=0;
    int q=0;
    if(a<=1000){
        cout<<"NO"<<endl;
    }else{
    while(a>0){
        long long int c=a%10;
        a/=10;
        if(c==4){
            p++;
        }else if(c==7){
            p++;
        }else{
            q++;
        }
    }
    if(p==4 || p==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
}
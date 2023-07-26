#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int a,n;
    cin>>a;
    cin>>n;
    int b=pow(10,n);
    int c=a%b;
    int d=pow(10,n-1);
    cout<<c/d<<endl;
    return 0;
}
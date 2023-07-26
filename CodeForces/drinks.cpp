#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    int a[t];   
    int sum=0; 
    for(int i=0;i<t;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<setprecision(14);
    double sum_d=sum;
    double t_d=t;
    long double d=sum_d/t_d;
    cout<<d;

    return 0;
}
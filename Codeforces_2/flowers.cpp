#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long b[n];
    long long p=1;
    long long q=1;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    int diff=b[n-1]-b[0];
    if(b[0]==b[n-1]){
        cout<<diff<<" "<<(n-1)*n/2;
    }else{
    for(int i=1;i<n-1;i++){
        if(b[i]==b[0]){
            p++;
        }
        if(b[i]==b[n-1]){
            q++;
        }
    }
    if(diff>0)
    cout<<diff<<" "<<p*q;
    else
    cout<<diff<<" "<<n*(n-1)/2;
}}
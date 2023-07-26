#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    int p=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }    
    for(int i=0;i<n;i++){
        if(a[i]==1 && a[i+1]==10){
            p++;
        }
        if(a[i]==1 && a[i-1]==10){
            p++;
        }

    }
    cout<<p+1;
    return 0;

}
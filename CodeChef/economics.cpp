#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n],d[n];
        int p=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        for(int i=0;i<n;i++){
            if(s[i]==d[i]){
                p++;
            }
        }
        cout<<p<<endl;
        
    }
    
    return 0;
}
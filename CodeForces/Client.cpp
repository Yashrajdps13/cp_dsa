#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string o;
        cin>>o;
        int q=0;
        int a=0;
        for(int i=0;i<n;i++){
            if(o[i]=='A'){
                a++;
            }else{
                q++;
            }
        }
        if(a>=q && o[n-1]=='A'){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
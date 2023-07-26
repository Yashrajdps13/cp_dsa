#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int exit[t],enter[t];
    int cap[t];
    for(int i=0;i<t;i++){
        cin>>exit[i]>>enter[i];
    }
    for(int i=1;i<t;i++){
        cap[0]=enter[0];
        cap[i]=cap[i-1]-exit[i]+enter[i];
    }
    sort(cap,cap+t);
    cout<<cap[t-1]<<endl;


    return 0;
}
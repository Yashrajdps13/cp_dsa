#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    int l[t],r[t];
    int c_l=0;
    int o_l=0;
    int c_r=0;
    int o_r=0;
    for(int i=0;i<t;i++){
        cin>>l[i]>>r[i];
        if(l[i]==0){
            c_l++;
        }else{
            o_l++;
        }
        if(r[i]==0){
            c_r++;
        }else{
            o_r++;
        }
    }
    int total=min(c_l,o_l)+min(c_r,o_r);
    cout<<total<<endl;
    return 0;
}
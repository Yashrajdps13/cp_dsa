#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    int p_1[t],p_2[t];
    int w[t],l[t];    
    while(t--){
        for(int i=0;i<t;i++){
            cin>>p_1[i]>>p_2[i];
            if(p_1[i]>p_2[i]){
                w[i]=1;
                l[i]=p_1[i]-p_2[i];
                
            }else{
                w[i]=2;
                l[i]=p_2[i]-p_1[i];
            }
            // cout<<w[i]<<" "<<l[i]<<endl;
        }
    }
    cout<<w[t-1]<<" "<<l[t-1];

    return 0;
}
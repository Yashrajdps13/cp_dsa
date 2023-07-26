#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int sum_a=0;
    int sum_b=0;
    int sum_c=0;
    int a[t],b[t],c[t];
        for(int i=0;i<t;i++){
            cin>>a[i]>>b[i]>>c[i];
            sum_a+=a[i];
            sum_b+=b[i];
            sum_c+=c[i];
        }
        if(sum_a==0 && sum_b==0 && sum_c==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    
    return 0;
}
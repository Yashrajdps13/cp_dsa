#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool check_prime(int n){
    bool is_prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            is_prime=false;
            break;
        }
    }
    return is_prime;
}

int main(){
    
    int n,m;
    cin>>n>>m;
    int q=0;
    int p=0;
    if(check_prime(m)==false){
        cout<<"NO"<<endl;
    }else{
        if(m-n==1){
            cout<<"YES"<<endl;
        }else{
        for(int i=n+1;i<m;i++){
            if(check_prime(i)){
                cout<<"NO"<<endl;
                p++;
                break;
            }else{
                q++;
            }
        }
        }
    }
    if(q>0 && p==0){
        cout<<"YES"<<endl;
    }
    return 0;
}

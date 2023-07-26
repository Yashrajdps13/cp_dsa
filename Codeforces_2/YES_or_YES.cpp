#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        transform(a.begin(),a.end(),a.begin(),::toupper);
        if(a=="YES"){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
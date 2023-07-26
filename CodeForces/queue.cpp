#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,t;
    cin>>l>>t;
    string a;
    cin>>a;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    while(t--){
        int b=0;
        while(b<l){
            if(a[b]=='b' && a[b+1]=='g'){
                a[b]='g';
                a[b+1]='b';
                b=b+2;
            }else{
                b++;
            }
        }
    }
    transform(a.begin(),a.end(),a.begin(),::toupper);
    cout<<a;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string a;
    int b;
    cin>>a>>b;
    int p=0;
    int len=a.size();
    int c=b;
    int d=12-len;
    string e (d,' ');
    if(b>=100){
        cout<<a<<e<<b<<endl;
    }else if(b<100 && b>=10){
        cout<<a<<e<<0<<b<<endl;
    }else if(b>0 && b<10){
        cout<<a<<e<<"00"<<b<<endl;
    }else{
        cout<<a<<e<<"000"<<endl;
    }
    
    }
    return 0;
}
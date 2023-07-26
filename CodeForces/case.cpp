#include <bits/stdc++.h>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
    string a;
    cin>>a;
    int strlen=a.size();
    int m=0;
    int n=0;
    for(int i=0;i<strlen;i++){
        if(isupper(a[i])){
            m++;
        }else{
            n++;
        }
    }
    for(int i=0;i<strlen;i++){
        if(m>n){
        a[i]=toupper(a[i]);
    }else{
        a[i]=tolower(a[i]);
    }
    }
    
    cout<<a;
    return 0;
}

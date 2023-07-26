#include<iostream>
#include <cstring>
#include <cctype>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string a;
    string b;
    cin>>a;
    cin>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    const char* c=a.c_str();
    const char* d=b.c_str();
    if(c==d){
        cout<<"0"<<endl;
    }else{
        cout<<strcmp(c,d)<<endl;
    }
    return 0;
}
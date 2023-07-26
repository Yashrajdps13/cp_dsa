#include <bits/stdc++.h>
using namespace std;
void sortstring(string &str){
    sort(str.begin(),str.end());
}

int  main(){
    string u;
    cin>>u;
    int len=u.size();
    int p=0;
    sortstring(u);
    for(int i=0;i<len;i++){
        if(u[i]==u[i+1]){
            p++;
        }
    }
    int d=len-p;
    if(d%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
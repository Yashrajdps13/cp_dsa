#include <bits/stdc++.h>
using namespace std;
void sortstring(string  &str){
    sort(str.begin(),str.end());
}

int main(){

    string g,h;
    cin>>g;
    cin>>h;
    int l=0;
    int g_len=g.size();
    int h_len=h.size();
    int t=g_len+h_len;
    string c {g+h};
    string p;
    cin>>p;
    int p_len=p.size();
    sortstring(p);
    sortstring(c);
    if(t==p.size()){
        for(int i=0;i<t;i++){
        if(p[i]!=c[i]){
            l++;
        }
    }
        if(l>0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}

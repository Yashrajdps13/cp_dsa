#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int l=s.size();
    int p=0;
    for(int i=0;i<l;i++){
        if(s[i]=='1'){
            p+=a;
        }
        if(s[i]=='2'){
            p+=b;
        }
        if(s[i]=='3'){
            p+=c;
        }
        if(s[i]=='4'){
            p+=d;
        }
    }
    cout<<p;
}
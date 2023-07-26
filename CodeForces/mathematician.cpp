#include <iostream>
using namespace std;
int main(){

    string a,b;
    cin>>a;
    cin>>b;
    int len=a.size();
    char c[len];
    for(int i=0;i<len;i++){
        if(a[i]==b[i]){
            c[i]='0';
        }else{
            c[i]='1';
        }
        cout<<c[i];
    }

    return 0;
}

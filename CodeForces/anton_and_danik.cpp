#include <iostream>
using namespace std;
int main(){

    string a;
    int p=0,q=0,len;
    cin>>len;
    cin>>a;
    for(int i=0;i<len;i++){
        if(a[i]=='A'){
            p++;
        }else{
            q++;
        }
    }
    if(p>q){
        cout<<"Anton"<<endl;
    }else if(p==q){
        cout<<"Friendship"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int h=0;
    int e=0;
    int l=0;
    int l_2=0;
    int o=0;
    int p=0;
    int ln=a.size();
    for(int i=0;i<ln;i++){
        if(a[i]=='h'){
            h=i;
            p+=1;
            break;
        }
    }
    for(int i=h;i<ln;i++){
        if(a[i]=='e'){
            e=i;
            p+=1;
            break;
        }
    }
    for(int i=e;i<ln;i++){
        if(a[i]=='l'){
            l=i;
            p+=1;
            break;
        }
    }
    for(int i=l+1;i<ln;i++){
        if(a[i]=='l'){
            l_2=i;
            p+=1;
            break;
        }
    }
    for(int i=l_2;i<ln;i++){
        if(a[i]=='o'){
            o=i;
            p+=1;
            break;
        }
    }
    if(p==5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
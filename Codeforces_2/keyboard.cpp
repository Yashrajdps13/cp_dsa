#include <iostream>
using namespace std;
int main(){
    string d;
    cin>>d;
    string a="qwertyuiopasdfghjkl;zxcvbnm,./";
    string e;
    cin>>e;
    if(d=="R"){
        for(int i=0;i<e.size();i++){
            for(int j=0;j<a.size();j++){
                if(e[i]==a[j]){
                    cout<<a[j-1];
                    break;
                }
            }
        }
    }
    if(d=="L"){
        for(int i=0;i<e.size();i++){
            for(int j=0;j<a.size();j++){
                if(e[i]==a[j]){
                    cout<<a[j+1];
                    break;
                }
            }
        }
    }
}
#include <iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    string a[t];
    int p=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(a[i]=="Tetrahedron"){
            p+=4;
        }
        if(a[i]=="Cube"){
            p+=6;
        }
        if(a[i]=="Octahedron"){
            p+=8;
        }
        if(a[i]=="Dodecahedron"){
            p+=12;
        }
        if(a[i]=="Icosahedron"){
            p+=20;
        }
    }
    cout<<p;
}
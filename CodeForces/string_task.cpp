#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    char b[] {'a','o','y','e','u','i'};
    transform(a.begin(),a.end(),a.begin(),::tolower);
    for(int i=0;i<a.size();i++){
        if(a[i]!='a' && a[i]!='o' && a[i]!='y' && a[i]!='e' && a[i]!='u' && a[i]!='i'){
            cout<<"."<<a[i];
        }
    }
}
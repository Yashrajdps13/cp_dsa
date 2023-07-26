#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    int p=1;
    string b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[0]==a[i]){
            p++;
        }
        if(a[0]!=a[i]){
            b=a[i];
        }
    }
    if(p>n/2){
        cout<<a[0];
    }else{
        cout<<b;
    }
}
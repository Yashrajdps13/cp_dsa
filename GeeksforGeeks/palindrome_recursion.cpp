#include <iostream>
using namespace std;
void palin(string a,int k,int n,int l){
    if(k==n){
        cout<<"Yes";
        return;
    }
    if(k==l/2-1 && n==l/2+1){
        cout<<"Yes";
        return;
    }
    if(a[n]!=a[k]){
        cout<<"No";
        return;
    }
    palin(a,k-1,n+1,l);
    
}
int main(){
    string a;
    cin>>a;
    int l=a.size();
    int k=l-1;
    palin(a,k,0,l);
}
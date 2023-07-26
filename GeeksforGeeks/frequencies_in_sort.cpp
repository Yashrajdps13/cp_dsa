#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[n-2]){
            if(a[i]!=a[i+1]){
                cout<<a[i]<<" ";
                cout<<p<<"\n"; 
                cout<<a[i+1]<<" "<<1;
            }else{
                p++;
                cout<<a[i]<<" "<<p;
            }
        }else{
        if(a[i]==a[i+1]){
            p++;
        }else{
            cout<<a[i]<<" ";
            cout<<p<<"\n";
            p=1;
        }
        }
    }
}

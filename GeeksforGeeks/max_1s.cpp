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
    int q=1;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1] && a[i]==1){
            p++;
        }else{
            if(q<p){
                q=p;
                p=1;
            }
        }
    }
    int r=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            r++;
        }
    }
    if(r==n){
        cout<<0;
    }else{
        cout<<max(p,q);
    }
}
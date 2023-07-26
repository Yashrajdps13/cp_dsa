#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],p;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        if(b[0]!=b[1]){
            p=b[0];
        }
        if(b[n-1]!=b[n-2]){
            p=b[n-1];
        }
        for(int i=0;i<n;i++){
            if(a[i]==p){
                cout<<i+1<<endl;
            }
        }
    }
}
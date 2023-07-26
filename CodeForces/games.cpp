#include <iostream>
using namespace std;;
int main(){

    int t;
    cin>>t;
    int a[t],b[t];
    int p=0;
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(a[i]==b[j]){
                p++;
            }
        }
    }
    cout<<p;
    return 0;
}
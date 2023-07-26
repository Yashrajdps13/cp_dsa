#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[7];
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    int c=0;
    int p=0;
    while(p<=n){
        p+=a[c];
        c++;
        if(p>=n){
            cout<<c;
            break;
        }
        if(c==7){
            c=0;
        }
    }
}
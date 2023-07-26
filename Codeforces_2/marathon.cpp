#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p=0;
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        for(int i=1;i<4;i++){
            if(a[i]>a[0]){
                p++;
            }
        }
        cout<<p<<"\n";
    }
}
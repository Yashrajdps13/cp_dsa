#include <iostream>
using namespace std;
int main(){

    int n,a,b,p=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b-a>=2){
            p++;
        }
    }
    cout<<p;

    return 0;
}
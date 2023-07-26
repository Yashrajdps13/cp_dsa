#include <iostream>
using namespace std;
int main(){

    string a;
    int b;
    cin>>b;
    cin>>a;
    int p=0;
    for(int i=0;i<b;i++){
        if(a[i]==a[i+1]){
            p++;
        }
    }
    cout<<p;
    return 0;
}
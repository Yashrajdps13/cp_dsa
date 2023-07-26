#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int tb=min(a,b)*2;
        int ta=max(a,b);
        if(max(a,b)<=tb){
            cout<<tb*tb<<"\n";
        }else{
            cout<<ta*ta<<"\n";
        }
    }
}
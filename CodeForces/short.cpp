#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        int len=a.size();
        if(len<=10){
            cout<<a<<endl;
        }else{
            cout<<a[0]<<len-2<<a[len-1]<<endl;
        }
    }
}
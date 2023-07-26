#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int l=a.size();
        cout<<a[0];
        for(int i=1;i<=l/2;i++){
            cout<<a[2*i-1];
        }
        cout<<endl;
    }
}
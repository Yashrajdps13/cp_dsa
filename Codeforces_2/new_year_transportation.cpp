#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int l=1;
    while(l<n){
        l+=a[l-1];
        if(l==t){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
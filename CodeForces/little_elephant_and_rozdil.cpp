#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    if(b[0]==b[1]){
        cout<<"Still Rozdil";
    }else{
        for(int i=0;i<n;i++){
            if(b[0]==a[i]){
                cout<<i+1;
            }
        }
    }
}
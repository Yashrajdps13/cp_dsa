#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        a[i]+=k;
    }
    int p=0;
    for(int i=0;i<n;i++){
        if(a[i]<=5){
            p++;
        }
    }
    cout<<p/3;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(n==2){
            cout<<a[1]-a[0]<<"\n";
        }else{
            int m1=a[n-1]-a[n-2];
            int m2=a[n-2]-a[n-3];
            cout<<min(m1,m2)<<"\n";
        }
    }
}
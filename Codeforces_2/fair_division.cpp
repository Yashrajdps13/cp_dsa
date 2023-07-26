#include <iostream>
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
        int sum=0;
        int p=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(a[i]==a[i++])
            p++;
        }
        if(sum%2==0 && p!=n){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        cout<<p;
    }
}
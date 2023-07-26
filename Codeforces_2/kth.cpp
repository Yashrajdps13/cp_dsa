#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int i=k;
        int ans=k;
        while(i<=n){
            ans++;
            i+=k;
        }
        cout<<ans<<"\n";
    }
}
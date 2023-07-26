#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(b,b+n);
        int i=n-1;
        int j=0;
        while(k>0){
            if(a[j]<b[i]){
            a[j]=b[i];
            i--;
            j++;
            k--;
            }else{
                break;
            }
        }
        int sum=0;
        for(auto k : a){
            sum+=k;
        }
        cout<<sum<<"\n";
    }
}
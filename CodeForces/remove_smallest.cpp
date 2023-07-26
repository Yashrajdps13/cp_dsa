#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int z=n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        while(z--){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
            if(a[i]-a[j]==1){
                a[j]=200;                
            }
            if(a[i]-a[j]==0){
                a[j]=200;
            }
            if(a[i]-a[j]==-1){
                a[i]=200;
            }
            }
        }
        }
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        int q=0;
        for(int i=0;i<n;i++){
            if(a[i]!=200){
                q++;
            }
        }
        if(q==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
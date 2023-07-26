#include <iostream>
using namespace std;
int checker(int a[],int n,int e){
    for(int i=0;i<n;i++){
        if(a[i]-e==0){
            cout<<"YES ";
            return i+1;
        }else if(a[i]-e>0){
            cout<<"NO ";
            return i+1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int e;
        cin>>e;
        cout<<checker(a,n,e)<<"\n";
    }
}
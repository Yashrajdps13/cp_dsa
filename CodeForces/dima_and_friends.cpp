#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    n++;
    int location=s%n;
    int ans=0;
    for(int i=1;i<=5;i++){
        location+=1;
        if(location%n!=1){
            ans++;
        }
    }
    cout<<ans;
}
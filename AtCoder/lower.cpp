#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxx=0;
    int l=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            l++;
        }else{
            maxx=max(l,maxx);
            l=0;
        }
    }
    maxx=max(l,maxx);
    l=0;
    cout<<maxx;
}
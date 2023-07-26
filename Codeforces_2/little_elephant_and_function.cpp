#include <iostream>
using namespace std;
int change(int a[],int n,int i=1){
    if(i==n){
        return 0;
    }
    int temp;
    temp=a[n-i];
    a[n-i]=a[n-i-1];
    a[n-i-1]=temp;
    return change(a,n,i++);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    change(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
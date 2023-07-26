#include <iostream>
using namespace std;
int l(int a[]){
    int p=0;
    for(int i=0;i<5;i++){
        if(a[i]>a[p]){
            p=i;
        }
    }
    return a[p];
}
int sl(int a[]){
    int p,q;
    q=a[0];
    p=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>q){
            q=p;
            p=a[i];
        }
    }
    return q;
}
bool sorted(int a[],int n){
    int i=0;
    while(i<n-1){
        if(a[i]>a[i+1]){
            return false;
        }
        i++;
    }
    return true;
}
void rev(int a[],int n){
    int temp;
    for(int i=0;i<=n/2;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rev(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
#include<iostream>
using namespace std;
bool allocation(int a[],int students,int t,int n){
    int s=0;
    int p=0;
    for(int i=0;i<n;i++){
        if(p+a[i]>t){
            s++;
            p=a[i];
            if(a[i]>t) return false;
        }else{
            p+=a[i];
        }
    }
    if(s>=students){
        return false;
    }
    return true;
}
int solve(int a[],int students,int n){
    int low=a[0];
    int high=0;
    for(int i=0;i<n;i++){
        high+=a[i];
    }
    while(low<=high){
        int t=(low+high)>>1;
        if(allocation(a,students,t,n)){
            high=t-1;
        }else{
            low=t+1;
        }
    }
    return low;
}   
int main(){
    int a[]={12,34,67,90};
    int students=2;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<solve(a,students,n);
}
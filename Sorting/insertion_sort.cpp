#include<iostream>
using namespace std;
int main(){
    //used in small sized arrays
    //see the video
    int a[]={1,3,2,5,3,6,32,121,6};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n;i++){
        int k=a[i];
        int j=i-1;
        while(j>=0&&a[j]>k){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
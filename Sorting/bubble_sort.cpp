#include<iostream>
using namespace std;
int main(){
    //swaps 2 elements at a time and keeps doing it until the array is sorted
    int a[]={1,6,1,4,8,1};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
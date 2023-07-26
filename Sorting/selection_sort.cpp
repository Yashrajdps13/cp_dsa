#include<iostream>
using namespace std;
int main(){
    //finds the maximum element and swaps it with the last element and keeps doiung it until it reaches the first element
    int  a[]={1,5,345,8,28,1929,293};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_ind]){
                min_ind=j;
            }
        }
        swap(a[min_ind],a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
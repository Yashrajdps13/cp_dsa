#include <iostream>
using namespace std;
int main(){
    int a[]={2,5,10,15,18};
    int n=sizeof(a)/sizeof(a[0]);
    int x=33;
    int k=0;
    int i=k+1;
    int j=n-1;
    while(x>0){
        x-=a[k];
        while(i<j){
            int s=a[i]+a[j];
            if(s>x){
                j--;
            }else if(s<x){
                i++;
            }else{
                cout<<a[k]<<" "<<a[i]<<" "<<a[j];
                return 0;
            }
        }
        x+=a[k];
        k++;
        i=k+1;
        j=n-1;
    }
    return -1;
}
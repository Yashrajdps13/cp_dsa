#include <iostream>
using namespace std;
int main(){
    int a[]={2,5,8,12,30};
    int n=sizeof(a)/sizeof(a[0]);
    int x=17;
    int i=0,j=n-1;
    int s=0;
    while(i<=j){
        s=a[i]+a[j];
        if(s==x){
            cout<<a[i]<<" "<<a[j];
            return 0;
        }else if(s<x){
            i++;
        }else{
            j--;
        }
    }
    return 0;
}
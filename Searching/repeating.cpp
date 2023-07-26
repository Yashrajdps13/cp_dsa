#include <iostream>
using namespace std;
int main(){
    int a[]={0,2,3,1,3};
    int n=sizeof(a)/sizeof(a[0]);
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int b[max];
    for(int i=0;i<n;i++){
        b[a[i]]++;
        if(b[a[i]]==2){
            cout<<a[i];
            return 0;
        }
    }
    return -1;
}
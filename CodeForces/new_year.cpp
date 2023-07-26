#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a[3],max,min;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    max=a[2];
    min=a[0];
    
    int d=max-min;
    int n[d+1];
    for(int i=min,k=0;i<max+1 && k<d+1;i++,k++){
        n[k]=abs(i-a[0])+abs(i-a[1])+abs(i-a[2]);
    }
    
    sort(n,n+(d+1));
    cout<<n[0];

}
#include <iostream>
using namespace std;
int main(){

    int f;
    cin>>f;
    int a[f];
    int n=f+1;
    int sum=0;
    for(int i=0;i<f;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int d=sum%n;
    if(d>1)


    return 0;
}
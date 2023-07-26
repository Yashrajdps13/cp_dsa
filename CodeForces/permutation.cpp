#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=i+1;
        int d=a[i];
        cout<<a[d]<<endl;
    }

    return 0;
}
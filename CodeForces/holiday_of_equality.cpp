#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int q=0;
    for(int i=0;i<n;i++){
        q+=a[n-1]-a[i];
    }
    cout<<q;
    return 0;
}
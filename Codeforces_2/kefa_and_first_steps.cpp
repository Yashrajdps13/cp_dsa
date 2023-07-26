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
    int p=1;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            p++;
        }
    }
    int b[p];
    int i=0;
    int q=1;
    int j=0;
    if(p==0){
        cout<<n;
        return 0;
    }else{
    while(j<p){
        if(a[i]<=a[i+1] && i<n-1){
            q++;
        }else{
            b[j]=q;
            q=1;
            j++;
        }
        i++;
    }
    int max=b[0];
    for(auto u : b){
        if(u>max){
            max=u;
        }
    }
    cout<<max;
    }
}
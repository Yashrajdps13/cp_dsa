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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int steal=0;
    int p=0;
    int j=n-1;
    if(n==1){
        cout<<1;
        return 0;
    }
    while(j>=0){
        if(steal>sum){
            cout<<p;
            return 0;
        }else if(steal==sum){
            cout<<p+1;
            return 0;
        }else{
            steal+=a[j];
            sum-=a[j];
            p++;
            j--;
        }
    }
}
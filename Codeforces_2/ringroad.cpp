#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int p=1;
    long long t=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]>=p){
            t=t+a[i]-p;
        }else{
            t=t+n-p+a[i];
        }
        p=a[i];
    }
    cout<<t;
}
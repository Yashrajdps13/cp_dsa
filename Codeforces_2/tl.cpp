#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int max1=INT_MIN;
    int min1=INT_MAX;
    int max2=INT_MIN;
    int min2=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        max1=max(a[i],max1);
        min1=min(a[i],min1);
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        max2=max(b[i],max2);
        min2=min(b[i],min2);
    }
    if(min2<=max1){
        cout<<-1;
    }else{
        int t;
        if(min1*2<max1){
            t=max1;
        }else{
            t=2*min1;
        }
        if(t>=min2){
            cout<<-1;
        }else{
            cout<<t;
        }
    }

}
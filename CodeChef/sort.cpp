#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,5,8,54,2,4,84,24};
    int len=sizeof(a)/sizeof(a[0]);
    sort(a,a+len);
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    cout<<""<<endl;
    sort(a,a+len,greater<int>());
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
}

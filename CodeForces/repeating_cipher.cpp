#include <iostream>
using namespace std;
int sum(int a,int i=1){
    if(a==0){
        return i-1;
    }
    return sum(a-i,i+1);
    
}
int main()
{
    int t;
    cin>>t;
    string a;
    cin>>a;
    int d=sum(t);
    if(d==1){
        cout<<a;
    }else{
    cout<<a[0]<<a[1];
    for(int i=1,k=2;i<t-d-1&&k<=d;i=i+k,k++){
        cout<<a[i+k];
    }
    }
}
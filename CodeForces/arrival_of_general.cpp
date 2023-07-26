#include <iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    int a[t];
    int p,q;
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<t;i++){
        if(a[i]>=max){
            max=a[i];
        }
    }
    int min=a[0];
    for(int i=0;i<t;i++){
        if(a[i]<=min){
            min=a[i];
        }
    }
    for(int i=0,j=i+1;i<t && j<t;i++,j++){
        if(a[i]==a[j] && a[i]==min){
            a[i]=0;
        }
        if(a[i]==a[j] && a[i]==max){
            a[j]=0;
        }
        
    }
    for(int i=t-1,j=0;i>=0&&j<t;i--,j++){
        if(a[i]==max){
            p=i;
        }
        if(a[j]==min){
            q=j;
        }
    }
    if(p==q){
        cout<<0<<endl;
    }
    else{
        if(p>q){
            cout<<p+t-(q+2)<<endl;
        }else{
            cout<<p+t-(q+1)<<endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];      
    }
    int p=0,q=0,r=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            p++;
        }
        if(a[i]==2){
            q++;
        }
        if(a[i]==3){
            r++;
        }
    }
    if(p==0 || q==0 || r==0){
        cout<<0;
    }else{
    int one[p];
    int two[q];
    int three[r];
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    while(i<n){
        if(a[i]==1){
            one[j]=i+1;
            j++;
        }else if(a[i]==2){
            two[k]=i+1;
            k++;
        }else{
            three[l]=i+1;
            l++;
        }
        i++;
    }
    int f=0;
    cout<<min(min(p,q),r)<<"\n";;
    while(f<min(min(p,q),r)){
        cout<<one[f]<<" "<<two[f]<<" "<<three[f]<<"\n";
        f++;
    }
    }
}
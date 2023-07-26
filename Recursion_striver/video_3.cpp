#include <iostream>
#include <algorithm>
using namespace std;
int rev(int a[],int i,int n){
    if(i==n/2+1){
        return a[i];
    }
    int temp;
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
    return rev(a,i+1,n);
}
bool is_palin(string s,int i,int l){
    if(i==l/2+1){
        return 1;
    }
    if(s[i]==s[l-i-1]){
        return is_palin(s,i+1,l);
    }else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rev(a,0,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int l=s.size();
    cout<<boolalpha;
    cout<<is_palin(s,0,l);
}
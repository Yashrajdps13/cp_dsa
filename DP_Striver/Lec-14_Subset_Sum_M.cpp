#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<int> &a,int i,int k){
    if(k==0) return true;
    if(i==0) return (a[0]==k);

    bool nottake=solve(a,i-1,k);
    bool take=false;
    if(a[i]<=k) take=solve(a,i-1,k-a[i]);
    return nottake||take;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {cin>>a[i];}
    cout<<boolalpha;
    cout<<solve(a,n-1,k);
    
}
#include<iostream>
using namespace std;
void solve(int a[],int n){
    int slow=a[0];
    int fast=a[0];
    while(slow!=fast){
        slow=a[slow];
        fast=a[a[fast]];
    }
    slow=a[0];
    while(slow!=fast){
        slow=a[0];
        fast=a[a[fast]];
    }
    cout<<a[slow];
}
int main(){
    int a[]={3,1,3,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    solve(a,n);
}
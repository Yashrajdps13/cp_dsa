#include <iostream>
using namespace std;
void reverse(int a[],int x,int y){
    int temp;
    int j=y;
    for(int i=x;i<(x-y)/2;i++){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
}
void reverse_by_d(int a[],int d,int n){
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n);

}
int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse_by_d(a,d,n);
    for(auto i:a){
        cout<<i<<" ";
        i++;
    }
}
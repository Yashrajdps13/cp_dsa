#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int j=n-i;
        while(j--){
            cout<<"  ";
        }
        int l=0;
        while(l<=i){
            cout<<l<<" ";
            l++;
        }
        l=l-2;
        while(l>=0){
            cout<<l<<" ";
            l--;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        int j=n-i;
        while(j--){
            cout<<"  ";
        }
        int l=0;
        while(l<=i){
            cout<<l<<" ";
            l++;
        }
        l=l-2;
        while(l>=0){
            cout<<l<<" ";
            l--;
        }
        cout<<endl;
    }
}
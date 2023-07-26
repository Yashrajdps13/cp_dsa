#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        for(int i=n-j-1;i>0;i--){
            cout<<" ";
        }
        int a=j+1;
        while(a--){
            cout<<"* ";
        }
        for(int i=n-j-1;i>0;i--){
            cout<<" ";
        }
    cout<<endl;
    }
    for(int j=n-1;j>=0;j--){
        for(int i=n-j-1;i>0;i--){
            cout<<" ";
        }
        int a=j+1;
        while(a--){
            cout<<"* ";
        }
        for(int i=n-j-1;i>0;i--){
            cout<<" ";
        }
    cout<<endl;
    }
}
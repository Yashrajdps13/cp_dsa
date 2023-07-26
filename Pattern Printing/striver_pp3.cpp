#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            int a=4*(n-i)-1;
            while(a>0){
            cout<<" ";
            a--;
            }
            for(int j=i;j>0;j--){
                cout<<j<<" ";
            }
            cout<<endl;
    }
    char b='a';
    b++;
    cout<<b;
}
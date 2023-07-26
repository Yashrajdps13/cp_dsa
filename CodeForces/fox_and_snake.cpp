#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    string a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]="#";
        }
    }
    for(int i=1;i<m;i=i+2){
        for(int j=0;j<n;j++){
            a[i][j]=".";
        }
    }
    for(int i=1;i<m;i=i+4){
        for(int j=0;j<n;j++){
            a[i][n-1]="#";
        }
    }
    for(int i=3;i<m;i=i+4){
        for(int j=0;j<n;j++){
            a[i][0]="#";
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
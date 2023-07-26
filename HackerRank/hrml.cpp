#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string a[n];
    string b[m];
    for(int i=0;i<n;i++){
        getline(cin,a[i]);
    }
    for(int i=0;i<m;i++){
        getline(cin,b[i]);
    }
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
}
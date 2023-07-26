#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int max=b[0];
    for(int i=0;i<n;i++){
        if(max<b[i]){
            max=b[i];
        }
    }
    int p=max/m;
    p--;
    cout<<max<<endl;
    while(p--){
        for(int i=0;i<n;i++){
            b[i]-=m;
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
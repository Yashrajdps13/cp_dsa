#include <iostream>
using namespace std;
int main(){

    int  n;
    cin>>n;
    int a[n];
    int p=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            p++;
        }
    }
    if(p>0){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}
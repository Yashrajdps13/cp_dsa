#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    int p=0;
    int c=b-1;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int j=0;j<a;j++){
        if(arr[j]>=arr[c] && arr[j]>0){
            p++;
        }
    }
    
    cout<<p;

}
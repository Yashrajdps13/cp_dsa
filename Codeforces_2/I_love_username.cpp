#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curr_min=a[0];
    int curr_max=a[0];
    int c_max=0;
    int c_min=0;
    for(int i=0;i<n;i++){
        if(a[i]>curr_max){
            c_max++;
            curr_max=a[i];
        }
        if(a[i]<curr_min){
            c_min++;
            curr_min=a[i];
        }
    }
    cout<<c_max+c_min;
}
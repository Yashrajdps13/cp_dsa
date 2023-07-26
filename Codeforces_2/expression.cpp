#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[]={a+b+c,a*b+c,a+b*c,(a+b)*c,a*(b+c),a*b*c};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}
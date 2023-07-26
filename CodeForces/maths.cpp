#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    string a;
    cin>>a;
    int len=a.size();
    int len_1=(len+1)/2;
    string arr[len_1];
    for(int i=0;i<len_1;i++){
        arr[i]=a[2*i];
    }
    sort(arr,arr+len_1);
    cout<<arr[0];
    for(int k=1;k<len_1;k++){
        cout<<"+"<<arr[k];
    }
    return 0;
}
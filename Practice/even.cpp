#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int o=0;
    int e=0;
    while(n--){
        cin>>a[n];
        if(a[n]%2==0){
            e++;
        }else{
            o++;
        }
    }
    if(e>0){
        cout<<"THe array has atleast 1 even number"<<endl;
    }else{
        cout<<"testcase"<<endl;
    }

    return 0;
}
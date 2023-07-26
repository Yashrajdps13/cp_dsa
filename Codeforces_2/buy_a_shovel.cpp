#include <iostream>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int p=0;
    int q=0;
    int c;
    for(int i=1;i<=10;i++){
        if((k*i)%10==r){
            c=i;
            break;
        }
        if((k*i)%10==0){
            c=i;
            break;
        }
    }
    cout<<c;
    return 0;
}
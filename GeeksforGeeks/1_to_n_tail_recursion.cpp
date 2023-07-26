#include <iostream>
using namespace std;
void next(int n,int k=1){
    if(n==0){
        return;
    }else{
        cout<<k<<endl;
        next(n-1,k+1);
    }
}
int main(){
    int a;
    cin>>a;
    next(a);
}

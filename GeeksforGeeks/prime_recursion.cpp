#include <iostream>
using namespace std;
bool prime(int n,int k=2){
    if(n<=2){
        return true;
    }
    if(n%k==0){
        return false;
    }
    if(k>n/2){
        return true;
    }
    return prime(n,k+1);
}
int main(){
    int a;
    cin>>a;
    if(prime(a)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

}
#include <iostream>
using namespace std;
int sum_of_n(int n){
    if(n==0){
        return 0;
    }
    return n+sum_of_n(n-1);
}
int sum_of_n_p(int i,int n){
    if(i==n+1){
        return 0;
    }
    return i+sum_of_n_p(i+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<sum_of_n(n)<<endl;
    cout<<sum_of_n_p(1,n);
}
#include <iostream>
using namespace std;
void next(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    next(n-1);
    cout<<n<<endl;
}
int main(){
    int a;
    cin>>a;
    next(a);
}
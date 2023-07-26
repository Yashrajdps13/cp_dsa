#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=n;
    int a[]={4,7,44,47,74,77,444,447,477,474,777,774,744,747};
    for(int i=0;i<14;i++){
        if(n%a[i]==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
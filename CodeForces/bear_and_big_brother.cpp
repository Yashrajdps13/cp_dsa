#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double l,b;
    cin>>l>>b;
    int p=0;
    while(l<=b){
        l*=1.5;
        p++;
    }
    cout<<p;
}
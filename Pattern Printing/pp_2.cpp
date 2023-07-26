#include <iostream>
using namespace std;
int main(){
    int n=15;    
    int k=1;
    for(int i=0;i<5;i++){
        for(int j=1;j<=k;j++){
            cout<<k++;
        }
        cout<<"\n";
    }
}
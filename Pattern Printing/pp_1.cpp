#include <iostream>
using namespace std;
void pp_f(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void pp_w(int n){
    int i=0,j=0;
    while(i<n){
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        j=0;
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    pp_f(n);
    pp_w(n);
}

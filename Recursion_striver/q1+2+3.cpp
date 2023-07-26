#include <iostream>
using namespace std;
int c=0;
void rep(string a){
    if(c==5)
    return;
    cout<<a<<endl;
    c++;
    rep(a);
}int i=1;
int numbers(int n){
    if(i==n){
        return n;
    }
    cout<<i<<endl;
    i++;
    return numbers(n);
}
void rev_numbers(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    n--;
    rev_numbers(n);
}
int main(){
    string a="Utkarsh";
    rep(a);
    int n;
    cin>>n;
    //cout<<numbers(n);
    rev_numbers(n);
}
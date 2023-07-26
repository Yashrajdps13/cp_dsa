#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int q=0;
    int p=0;
    while(t--){
        int m,c;
        cin>>m>>c;
        if(m>c){
            p++;
        }else if(c>m){
            q++;
        }
    }
    if(p>q){
        cout<<"Mishka";
    }else if(q>p){
        cout<<"Chris";
    }else{
        cout<<"Friendship is magic!^^";
    }
}
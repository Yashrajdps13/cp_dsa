#include  <iostream>
using namespace std;
int main(){

    string a;
    string c;
    cin>>a;
    int p=0;
    for(int i=0;i<5;i++){
        cin>>c;
        if(c[0]==a[0] || c[1]==a[1]){
            p++;
        }
    }

    if(p>0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}
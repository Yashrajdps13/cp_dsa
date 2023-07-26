#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string a;
    int p=0;
    int q=0;
    while(t--){
        cin>>a;
        if(a=="++X"){
            p++;
        }
        if(a=="X++"){
            p++;
        }
        if(a=="--X"){
            q++;
        }
        if(a=="X--"){
            q++;
        }
    }
    cout<<p-q<<endl;
}
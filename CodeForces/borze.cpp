#include <iostream>
using namespace std;
int main(){
    string code;
    cin>>code;
    int len=code.size();
    int count=0;
    while(count<len){
        if(code[count]=='.'){
            cout<<0;
            count=count+1;
        }
        if(code[count]=='-' && code[count+1]=='-'){
            cout<<2;
            count=count+2;
        }
        if(code[count]=='-' && code[count+1]=='.'){
            cout<<1;
            count=count+2;
        }
    }
    return 0;
}
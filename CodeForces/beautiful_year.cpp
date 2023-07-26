#include <iostream>
using namespace std;

bool is_distinct(string a){
    int p=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i]==a[j] && i>j){
                p++;
            }
        }
    }
    if(p==0){
        return true;
    }else{
        return false;
    }
}



int main(){
    string b;
    cin>>b;
    int d=stoi(b);
    while(d>0){
        d++;
        string e=to_string(d);
        if(is_distinct(e)==true){
            cout<<e;
            break;
        }
    }
}
















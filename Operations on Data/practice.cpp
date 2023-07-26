#include <iostream>
#include <string>

using namespace std;

int main(){
    int c,x,b,d;
    string a;
    string e="standard";
    string f="room";
    int g=100*b+50*d;
    int h=g+100;
    cin>>c;
    for(x=1;x<c+1;x++){
        cin>>a>>b>>d;
        if(a==e){
            int i=100*b+50*d;
            cout<<i;
        }
        if(a==f){
            int j=100*b+50*d+100;
            cout<<j;
        }
    }
}

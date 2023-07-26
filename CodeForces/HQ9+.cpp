#include <iostream>
#include <string>
using namespace std;

int main(){

    string c;
    cin>>c;
    int len=c.size();
    int h=0;
    int q=0;
    int nine=0;
    int plus=0;
    for(int i=0;i<len;i++){
        if(c[i]=='H'){
            h++;
        }
        if(c[i]=='Q'){
            q++;
        }
        if(c[i]=='9'){
            nine++;
        }
        
    }
    if(h==0 && q==0 && nine==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

    return 0;
}
#include <iostream>
#include <cctype>

using namespace std;
int main(){

    string a;
    cin>>a;
    int len=a.size();
    for(int i=0;i<len;i++){
        if(isalnum(a[i])){
            cout<<a[i]<<" is alphanumeric"<<endl;
        }
    }
    cout<<"==============================="<<endl;
    char sentence[] {"Hello there, my name is Utkarsh Ranjan."};
    int c=0;
    for(int i=0;i<size(sentence);i++){
        if(isblank(sentence[i]))
        c++;
    }
    cout<<c<<endl;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
    string c;
    bool a {true};
    bool b {false};
    cin>>c;
    if (c == "a"){
        cout<<"Entered alphabet is a\n"<<endl;
    }else{
        cout<<"Entered alphabet is not a\n"<<endl;
    }
    cout << boolalpha<<endl;
    cout<<a;
    return 0;
}
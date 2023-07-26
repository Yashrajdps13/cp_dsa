#include <iostream>
#include <string>

using namespace std;

int main(){

    string message {"Hello World"};
    string greetings {4,'e'};
    string part{message,6,5};
    cout<<part<<endl;

    return 0;
}
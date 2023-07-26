#include <iostream>
using namespace std;
int main(){
    char message{'c'};
    char *p_message{};
    p_message=&message;
    cout<<p_message<<endl;
    cout<<*p_message<<endl;
}
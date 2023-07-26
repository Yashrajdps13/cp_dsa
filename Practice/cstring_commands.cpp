#include<iostream>
#include <cstring>

using namespace std;

int main(){

    const char message1 [] {"This is first line"};
    const char* p_message1 {message1};
    cout<<strlen(message1)<<endl;
    cout<<strlen(p_message1)<<endl;

    return 0;
}
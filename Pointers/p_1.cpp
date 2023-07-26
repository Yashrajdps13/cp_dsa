#include<iostream>
using namespace std;

int main(){
    int var {20};
    int* p_var=&var;
    // cout<<var<<endl;
    // cout<<p_var<<endl;
    cout<<*p_var<<endl;
    // int var1 {30};
    // p_var=&var1;
    cout<<p_var<<endl;
    //0x3f93ff9d0
    delete p_var;
    p_var=nullptr;
}
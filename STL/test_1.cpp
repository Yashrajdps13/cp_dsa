#include <iostream>
using namespace std;
namespace custom_1{
    int val=50;
    int getval(){
        return 10*val;
    }
}
int main(){
    int val=10;
    cout<<val<<endl;
    cout<<custom_1::val<<endl;
    cout<<custom_1::getval()<<endl;
}
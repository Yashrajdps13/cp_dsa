#include <iostream>
using namespace std;
int main(){
    // int *p_number;
    // int num {22};
    // p_number=&num;
    // cout<<p_number<<endl;
    // cout<<*p_number<<endl;
    int *p_1{new int};
    *p_1=55;
    cout<<p_1<<endl;
    delete p_1;
    p_1=nullptr;
    cout<<p_1<<endl;
}

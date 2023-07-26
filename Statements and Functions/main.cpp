#include <iostream>

using namespace std ;

int addnumbers(int num_1,int num_2){
    int sum= num_1+num_2;
    return sum;
}

int main(){

    int a =addnumbers(12,13);
    cout << a;
    return 0;
}
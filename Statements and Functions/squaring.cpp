#include <iostream>
using namespace std;
int power(int a){
    int b= a*a;
    return b;
}
int main(){
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    cout<<"Square of your number is "<<power(a);

}
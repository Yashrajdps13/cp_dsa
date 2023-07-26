#include <iostream>

using namespace std;

int product(int num_1, int num_2){
    int a= num_1*num_2;
    return a;
}
int main(){
    int b,c;
    cout<<"Enter your first number: ";
    cin>>b;
    cout<<"\n Enter your second number: ";
    cin>> c;
    cout<<"\n Product of the two numbers are: "<<product(b,c);

}
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a= 12;
    float b {};
    float c= a/b;
    cout<< c<<endl;
    cout<< c+1<<endl;
    float d {1.90647798134701294f};
    long double e {6.287353979875L};
    cout<<setprecision(20);
    cout<<d<<endl;
    cout<<e<<endl;
    
    return 0;
}
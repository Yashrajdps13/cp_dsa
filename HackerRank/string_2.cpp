#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a,b;
    cin>>a;
    cin>>b;
    cout<<""<<endl;
    int len_1=a.size();
    int len_2=b.size();
    cout<<len_1<<" "<<len_2<<endl;
    cout<<a<<b<<endl;
    char c_1=a[0];
    char c_2=b[0];
    a[0]=b[0];
    cout<<a;
    cout<<" ";
    b[0]=c_1;
    cout<<b;
    return 0;
}

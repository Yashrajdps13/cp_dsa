#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a {1000};
    int b {12873528};
    int& a_referance {a};
    int& b_referance {b};
    cout<<a_referance<<endl;
    cout<<b_referance<<endl;
    a_referance=20;
    b_referance=23;
    cout<<"==================="<<endl;
    cout<<a_referance<<endl;
    cout<<b_referance<<endl;
}
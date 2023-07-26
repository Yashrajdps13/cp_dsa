#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void increment(int *v) {
    (*v)++;
}
int sum_of_numbers(int a, int b){
    int c;
    c=a+b;
    return c;
}
int diff(int a, int b){
    int d;
    if(a>b){
        d=a-b;
    }else{
        d=b-a;
    }
    return d;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
    cin>>a;
    cin>>b;
    cout<<sum_of_numbers(a,b)<<endl;
    cout<<diff(a,b)<<endl;
    return 0;
}

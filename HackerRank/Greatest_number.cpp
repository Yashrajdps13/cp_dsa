#include <bits/stdc++.h>

using namespace std;

int largest_number(int a,int b,int c,int d){
    int e;
    if(a>b && a>c && a>d){
        e=a;
    }else if(b>a && b>c && b>d){
        e=b;
    }else if(c>a && c>b && c>d){
        e=c;
    }else if(d>a && d>b && d>c){
        e=d;
    }
    return e;
}

int main(){
    int num_1;
    int num_2;
    int num_3;
    int num_4;
    cin>>num_1;
    cin>>num_2;
    cin>>num_3;
    cin>>num_4;
    cout<<largest_number(num_1,num_2,num_3,num_4);
}
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){

    //Array-1

    int scores[5] {2,3,4,5,8};
    for(int i{0};i<5;++i){
     std::cout<<"Score ["<<i<<"]"<<" : "<<scores[i]<<std::endl;
    }

    //Array-2

    int Class_size[] {10,12,14,16,18};
    for(int value:Class_size){
        std::cout<<value<<std::endl;
    }

    //Array-3

    int multipliers[]{22,25,29};
    multipliers[1]=20;
    for(auto value:multipliers){
    std::cout<<value<<std::endl;
    }

    //Array-4

    int test[]{1,2,3,4,5};
    int multiplication=1;
    for(auto value:test){
        multiplication*=value;
    }
    std::cout<<multiplication<<std::endl;


    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // for(int i=0;i<1000000;i++){
    //     try{
    //         int* data {new int[10000000000]};
        
    // }catch(exception& ex){
    //     cout<<"The exception is: "<<ex.what()<<endl;
    // }
    // }
    for(int i=0;i<100;i++){
    int* data {new(nothrow) int[100000000000000]};
    if(data!=nullptr){
        cout<<"Data allocated"<<endl;
    }else{
        cout<<"Data allocation failed"<<endl;
    }
    }

    return 0;
}
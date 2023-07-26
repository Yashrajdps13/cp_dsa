#include <iostream>
using namespace std;

int main(){
    int b;
    cin>>b;
    string type[b];
    int num_1[b];
    int num_2[b];
    int c[b];
    for(int i=0;i<b;i++){
    cin>>type[i]>>num_1[i]>>num_2[i];
    }
    for(int i=0;i<b;i++){
        if(type[i]=="room"){
        c[i]=(num_1[i]*=100)+(num_2[i]*=50)+50;
    }
    }
    for(int i=0;i<b;i++){
        if(type[i]=="standard"){
        c[i]=(num_1[i]*=100)+(num_2[i]*=50);        
        }
    }
    int s=0;
    for(auto value:c){
        s+=value;
    }
    cout<<s;
    return 0;
}

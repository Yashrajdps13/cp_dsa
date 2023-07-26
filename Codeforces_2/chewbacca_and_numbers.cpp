#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==9){
        cout<<9;
        return 0;
    }
    vector<long long> a(0);
    int i=0;
    while(n>0){
        a.push_back(n%10);
        n/=10;
        i++;
    }
    vector<long long>::iterator it;
    for(it=a.begin();it!=a.end();it++){
        if(*it>4){
            *it=9-*it;
        }
    }
    vector<long long>::iterator it_1=a.end()-1;
    if(*it_1==0){
        *it_1=9;
    }
    for(it=a.end()-1;it!=a.begin()-1;it--){
        cout<<*it;
    }
    
}
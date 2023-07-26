#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a(5);
    for(int i=0;i<5;i++){
        a[i]=i+1;
    }
    vector<int>::iterator it_1=a.begin();
    for(auto l:a){
        cout<<l<<" ";
        l++;
    }
    cout<<endl;
    a.erase(a.begin()+1,a.begin()+3);
    a.insert(a.begin(),2);
    for(auto l:a){
    cout<<l<<" ";
    l++;
    }
    a.clear();
    cout<<endl;
    cout<<a.empty();
}
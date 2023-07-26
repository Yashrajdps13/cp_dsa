#include <iostream>
#include <vector>
using namespace std;
int main(){
//     vector<int> arr(5);
//     for(int i=0;i<5;i++){
//         arr[i]=i;
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     arr.push_back(1);
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
    vector<int> a(3);
    for(int i=0;i<3;i++){
        a[i]=i+1;
    }
    vector<int> b(3);
    vector<int>::iterator it=b.begin();
    while(it!=b.end()){
        a.push_back(*it);
        it++;
    }
    it=a.begin();
    while(it!=a.end()){
        cout<<*it;
        it++;
    }
}
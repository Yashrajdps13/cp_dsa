#include <iostream>
#include <set>
using namespace std;
int main(){
    // set<int> a;
    // int n;
    // cin>>n;
    // int b;
    // while(n--){
    //     cin>>b;
    //     a.insert(b);
    // }
    // for(auto i: a){
    //     cout<<i<<" ";
    //     i++;
    // }
    set<char> a;
    a.insert('b');
    a.insert('b');
    a.insert('b');
    a.insert('b');
    cout<<a.size();
}
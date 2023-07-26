#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>> d;
    d.push(10);
    d.push(3);
    vector<int> a;
    vector<int> b;
    for(int i=1;i<5;i++){
        a.push_back(i);
    }
    for(int i=6;i<10;i++){
        b.push_back(i);
    }
    for(int i=0;i<4;i++){
        pq.push(a[i]);
    }
    for(int i=0;i<4;i++){
        pq.push(b[i]);
    }
    vector<int> c;
    while(!pq.empty()){
        c.push_back(pq.top());
        pq.pop();
    }
    for(auto i:c){
        cout<<i<<" ";
    }
}
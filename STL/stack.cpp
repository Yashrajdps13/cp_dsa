#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    // for(int i=0;i<10;i++){
    //     st.push(i);
    // }
    // stack<int> st_1;
    // while(!st.empty()){
    //     st_1.push(st.top());
    //     cout<<st.top();
    //     cout<<" ";
    //     st.pop();
    // }
    int n;
    cin>>n;
    while(n>0){
        st.push(n%10);
        n/=10;
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
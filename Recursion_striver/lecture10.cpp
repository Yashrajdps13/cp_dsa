#include <iostream>
#include <vector>
using namespace std;
void subs(int a[],vector<int> &b, int i){
    if(i==2){
        int s=0;
        for(auto k:b){
            s+=k;
        }
        cout<<s<<" ";
        return;
    }
    b.push_back(a[i]);
    subs(a,b,i+1);
    b.pop_back();
    subs(a,b,i+1);
}
int main(){
    int n=2;
    int a[]={2,3};
    vector<int> b;
    subs(a,b,0);
}
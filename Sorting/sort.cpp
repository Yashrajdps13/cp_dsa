#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cond(vector<int>& a,vector<int>& b){
    if(a[1]==b[1]){
        return a[0]>b[0];
    }
    return a[1]<b[1];
}
int main(){
    vector<vector<int>> a;
    a.push_back({3,2});
    a.push_back({1,2});
    a.push_back({2,6});
    a.push_back({5,3});
    sort(a.begin(),a.end(),cond);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
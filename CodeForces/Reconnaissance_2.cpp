#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
static bool cond(vector<int> &x,vector<int> &y){
    return x[0]>y[0];
}
int main(){
    int n;
    cin>>n;
    vector<int> b(n);
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
        a[i].push_back(b[i]);
        a[i].push_back(i+1);
    }
    sort(a.begin(),a.end(),cond);
    int i1=0,i2=0;
    int diff=INT_MAX;
    for(int i=0;i<a.size()-1;i++){
        int d=a[i+1][0]-a[i][0];
        if(d<=diff){
            i1=a[i][1];
            i2=a[i+1][1];
        }
    }
    cout<<i1<<" "<<i2;
}
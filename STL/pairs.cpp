#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    // pair<int,int> p;
    // cin>>p.first>>p.second;
    // cout<<p.first<<" "<<p.second;
    int n;
    cin>>n;
    pair<int, int> a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<"\n";
    }
}
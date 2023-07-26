#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool sortcol(const vector<int> &v1,const vector<int> &v2){
    return v1[0]<v2[0];
}
int main(){
    int s,n;
    cin>>s>>n;
    vector<vector<int>> a(n);
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a[i].push_back(x);
        a[i].push_back(y);
    }
    sort(a.begin(),a.end(),sortcol);
    for(int i=0;i<a.size();i++){
        if(s>a[i][0]){
            s+=a[i][1];
        }else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
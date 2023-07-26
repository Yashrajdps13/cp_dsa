#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> a;
    a.push_back({1,2,3,4});
    a.push_back({5,6,7,8});
    a.push_back({9,10,11,12});
    a.push_back({13,14,15,16});
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
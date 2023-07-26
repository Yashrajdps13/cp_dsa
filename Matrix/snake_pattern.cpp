#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> a;
    a.push_back({1,2,3,4});
    a.push_back({5,6,7,8});
    a.push_back({9,10,11,12});
    a.push_back({13,14,15,16});
    int i=0;
    int j=0;
    int m=a.size();
    int n=a[0].size();
    while(i<m){
        if(i%2==0){
            cout<<a[i][j]<<" ";
            j++;
            if(j==n){
                j--;
                i++;
            }
        }else{
            cout<<a[i][j]<<" ";
            j--;
            if(j==-1){
                j++;
                i++;
            }
        }
    }
}
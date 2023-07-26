#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> b){
    int s=0;
    for(auto k:b){
        s+=k;
    }
    return s;
}
void subs(vector<vector<int>> &ds,vector<int> &a,vector<int> &subset,int index){
    if(subset.size()==3){
        if(!sum(subset)){
            ds.push_back(subset);
        }
    }
    for(int i=index;i<a.size();i++){
        subset.push_back(a[i]);
        subs(ds,a,subset,i+1);
        subset.pop_back();
    }
}
int main(){
    vector<int> a={-4,-5,-6,3,11,-13,3,14,1,-10,11,6,8,9,-6,-9,6,3,-15,-8,0,5,6,-8,14,-11,0,2,14,-15,14,-13,-5,-15,5,13,-13,-6,13,-4,-1,1,-13,14,-13,-12,-10,9,6,12,8,14,-5,-8,-9,-6,-4,-2,3,-5,-2,-6,-2,1,-5,-12,-1,-11,-11,-11,0,-4,-2,-5,-5,0,-2,-7,-14,-10,-10,10,-11,-8,-13,-13,1,-2,-7,11,8,6,-9,-9,14,1,-13,-9,-3,-9,-5,13,2,8,-7,13,-14,6,-9,-13,3,-12};
    int n=a.size();
    vector<vector<int>> ds;
    vector<int> subset;
    subs(ds,a,subset,0);
    for(int i=0;i<ds.size();i++){
        for(int j=0;j<ds[i].size();j++){
            cout<<ds[i][j]<<" ";
        }
        cout<<"\n";
    }
}
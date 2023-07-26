#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> map;
    int a[]={12,15,13,17,12};
    int b[]={13,15,13,17,12};
    for(int i=0;i<5;i++){
        map[a[i]]++;
    }
    for(int i=0;i<5;i++){
        if(map.find(b[i])==map.end()){
            cout<<0;
            break;
        }
        if(map[b[i]]==0){
            cout<<0;
            break;
        }
        map[b[i]]--;
    }
    cout<<endl;
    for(auto k: map){
        cout<<k.first<<" "<<k.second<<"\n";
    }
}
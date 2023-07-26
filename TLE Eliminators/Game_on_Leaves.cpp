#include <iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1){
            cout<<"Ayush\n";
        }else{
        vector<vector<int>> edges(n+1,vector<int>());
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        if(edges[x].size()==1){
            cout<<"Ayush\n";
        }else{
        int remove1=n-1-edges[x].size();
        bool enterAyush=false;
        if(remove1%2==0) enterAyush=true;
        int remove2=edges[x].size()-1;
        if(enterAyush){
            if(remove2%2==0){
                cout<<"Ayush\n";
            }else{
                cout<<"Ashish\n";
            }
        }else{
            if(remove2%2==1){
                cout<<"Ayush\n";
            }else{
                cout<<"Ashish\n";
            }
        }
        }
    }
    }
}
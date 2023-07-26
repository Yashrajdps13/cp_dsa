#include <iostream>
using namespace std;
int main(){
    int p=0;
    int q=0;
    int t;
    cin>>t;
    int data[t];
    for(int i=0;i<t;i++){
        cin>>data[i];
    }
    int m;
    cin>>m;
    int query[m];
    for(int i=0;i<m;i++){
        cin>>query[i];
        for(int j=0;j<t;j++){
            if(query[i]==data[j]){
                p+j+1;
                
            }
        }
    }
    cout<<p<<" "<<m-p+1<<endl;
    return 0;
}
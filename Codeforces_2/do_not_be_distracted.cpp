#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string d;
        cin>>d;
        int p=0;
        for(int i=0;i<n-1;i++){
            if(d[i]!=d[i+1]){
                for(int j=i+1;j<n;j++){
                    if(d[j]==d[i]){
                        p++;
                    }
                }
            }
        }
        if(p>0){
            cout<<"NO"<<endl;;
        }else{
            cout<<"YES"<<endl;;
        }
    }
}

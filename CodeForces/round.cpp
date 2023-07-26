#include <iostream>
#include <string>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int p=0;
        int l=a.size();
        for(int i=0;i<l;i++){
            if(a[i]!='0')
            p++;
        }
        cout<<p<<endl;
        for(int i=0;i<l;i++){
            string repeat (l-1-i,'0');
            if(a[i]!='0'){
            cout<<a[i]<<repeat<<" ";
            }
        }
        

    }

    return 0;
}
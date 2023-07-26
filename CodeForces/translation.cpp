#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    cout<<setprecision(20);
    string a,b;
    cin>>a;
    cin>>b;
    int l=a.size();
    int l_1=b.size();
    if(l==l_1){
        int p=0;
        for(int i=0;i<l;i++){
            if(a[i]!=b[l-1-i]){
                p++;
            }
        }
        if(p==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO";
    }
    return 0;
}
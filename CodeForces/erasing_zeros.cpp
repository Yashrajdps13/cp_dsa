#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int l=a.size();
        int p=0;
        int q=0;
        int b[l];
        for(int i=0;i<l;i++){
            b[i]=0;
            if(a[i]=='1'){
                b[i]=i;
                q++;
            }
            
        }
        if(q==1){
            cout<<0<<endl;
        }else{
        sort(b,b+l,greater<int>());
        for(int i=0;i<l-1;i++){
            if(b[i+1]!=0){
            int d=b[i]-b[i+1];
            if(d>=2){
                p++;
                cout<<d-1<<endl;
            }
        }
        }
        if(p==0){
            cout<<0<<endl;
        }
        }
    }
}
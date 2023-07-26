#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int c[2],a[2];
    cin>>c[0]>>c[1]>>a[0]>>a[1];
    int p=0;
    int q=0;
    int r=0;    
    for(int i,j=0;i<2 && j<2;i++,j++){
        if(c[i]==a[j]){
            p++;
        }else{
            if(c[i]==a[0] || c[i]==a[1]){
                q++;
            }else{
                r++;
            }
        
        }
    if(p==2){
        cout<<0<<endl;
    }else if(q==1){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
}
    }
}
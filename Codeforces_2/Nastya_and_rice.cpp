#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int lg,ug,lp,up;
        lg=abs(a-b);
        ug=abs(a+b);
        lp=abs(c-d);
        up=abs(c+d);
        if(lg==0 || lp==0){
            cout<<"No\n";
        }else{
        for(int i=lp;i<=up;i++){
            for(int j=ug;j<=lg;j--){
                if(i==(n*j)){
                    goto yes;
                }
            }
        }
        cout<<"No";
        goto skip;
        yes:
        cout<<"Yes";
        skip:
        cout<<"\n";
        }
    }
}
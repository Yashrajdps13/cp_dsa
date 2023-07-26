#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
        int ans=0;
        while(s>0&&d>0){
            if(s>d){
                s-=2;
                d-=1;
                ans++;
                if(d<0||s<0){
                    ans--;
                    break;
                }
            }else{
                s-=1;
                d-=2;
                ans++;
                if(d<0||s<0){
                    ans--;
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
}
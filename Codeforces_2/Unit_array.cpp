#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int e=0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) o++;
            else e++;
        }
        if(o==e){
            if(e%2){
                cout<<1<<"\n";
            }else{
                cout<<0<<"\n";
            }
        }else if(o>e){
            if(e%2){
                cout<<1<<"\n";
            }else{
                cout<<0<<'\n';;
            }
        }else{
            int sum=o-e;
            int ans=0;
            while(sum<0||e%2){
                sum+=2;
                ans++;
                e--;
            }
            cout<<ans<<"\n";
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> w;
    w.push_back(0);
    for(int i=0;i<n;i++){
        w.push_back(w.back()+a[i]);
    }
    int q;
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
    cin>>b[i];
    int ans=-1;
    for(int i=0;i<q;i++){
        int low=0;
        int high=n;
        int ans=-1;
        while(low<=high){
            int t=(low+high)/2;
            if(w[t]==b[i]){
                ans=t;
                break;
            }else if(w[t]>b[i]){
                high=t-1;
                ans=t;
            }else{
                low=t+1;
            }
        }
        cout<<ans<<"\n";
    }
 
    
}
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxLen=0,currLen=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                currLen++;
            }else{
                maxLen=max(maxLen,currLen);
                currLen=0;
            }
        }
        maxLen=max(maxLen,currLen);
        cout<<maxLen<<"\n";
    }
    return 0;
}
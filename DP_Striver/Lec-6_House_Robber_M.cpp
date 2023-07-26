#include <iostream> 
#include<vector>
using namespace std;
long long subs(vector<long long> &dp,vector<int> &a,int n){
    if(n==0){
        return a[0];
    }else if(n<0){
        return 0;
    }
    if(dp[n]!=-1) return dp[n];
    long long pick=subs(dp,a,n-2)+a[n];
    long long notpick=subs(dp,a,n-1);
    return dp[n]=max(pick,notpick);
}
long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    int n=valueInHouse.size();
    if(n==1) return valueInHouse[0];
    vector<int> temp1;
    vector<int> temp2;
    for(int i=0;i<n-1;i++){
        temp1.push_back(valueInHouse[i]);
    }
    for(int i=1;i<n;i++){
        temp2.push_back(valueInHouse[i]);
    }
    int n1=temp1.size(),n2=temp2.size();;
    vector<long long> dp1(n1+1,-1);
    vector<long long> dp2(n2+1,-1);
    return max(subs(dp1,temp1,n1-1),subs(dp2,temp2,n2-1));
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<houseRobber(a)<<"\n";
    }
}
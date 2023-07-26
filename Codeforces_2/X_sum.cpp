#include<bits/stdc++.h>
using namespace std;
int check(vector<vector<int>> &a,int x,int y,int m,int n){
    int sum=0;
    int i=x,j=y;
    while(i>-1&&j>-1){
        sum+=a[i][j];
        i--,j--;
    }
    i=x,j=y;
    while(i<m&&j<n){
        sum+=a[i][j];
        i++,j++;
    }
    i=x,j=y;
    while(j>-1&&i<m){
        sum+=a[i][j];
        i++,j--;
    }
    i=x,j=y;
    while(j<n&&i>-1){
        sum+=a[i][j];
        i--,j++;
    }
    i=x,j=y;
    sum-=(3*a[i][j]);
    return sum;
}
int solve(vector<vector<int>> &a,int m,int n){
    int ans=-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans=max(ans,check(a,i,j,m,n));
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<vector<int>> a(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<solve(a,m,n);
    }
}
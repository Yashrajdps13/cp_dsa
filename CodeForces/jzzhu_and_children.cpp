#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i]/m;
        if(a[i]%m!=0){
            b[i]++;
        }
    }
    int max=0;
    int ind=0;
    for(int i=0;i<n;i++){
        if(b[i]>=max){
            max=b[i];
            ind=i;
        }
    }
    cout<<ind+1;
}
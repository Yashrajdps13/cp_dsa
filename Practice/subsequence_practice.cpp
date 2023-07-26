#include <iostream>
#include <vector>
using namespace std;
int sum_vec(vector<int> b){
    int sum=0;
    for(int i=0;i<b.size();i++){
        sum+=b[i];
    }
    return sum;
}
void subvec_sum_check(vector<int> b,int a[],int i,int k,int n){
    if(i==n){
        if(sum_vec(b)==k){
            for(auto j:b){
                cout<<j<<" ";
            }
            cout<<endl;
            return;
        }else{
            return;
        }
    }
    b.push_back(a[i]);
    subvec_sum_check(b,a,i+1,k,n);
    b.pop_back();
    subvec_sum_check(b,a,i+1,k,n);
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b;
}
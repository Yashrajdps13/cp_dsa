#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sum(vector<int> b){
    int s=0;
    for(auto k: b){
        s+=k;
    }
    return s;
}
void subs(vector<vector<int>> &ans,vector<int> &b,vector<int> &nums,int i,int n){
    if(i==n){
        if(b.size()==3){
        if(!sum(b)){
            ans.push_back(b);
        }
        }
        return;
    }
    b.push_back(nums[i]);
    subs(ans,b,nums,i+1,n);
    b.pop_back();
    subs(ans,b,nums,i+1,n);
}
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> b;
        int n=nums.size();
        subs(ans,b,nums,0,n);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]==ans[i+1]){
                vector<vector<int>>::iterator it=ans.begin();
                it=it+i;
                ans.erase(it);
            }
        }
        return ans;
    }
int main(){
    vector<int> a={0,0,0};
    int n=6;
    sort(a.begin(),a.end());
    vector<vector<int>> b=threeSum(a);
    sort(b.begin(),b.end());
    for(int i=0;i<b.size()-1;i++){
        if(b[i]==b[i+1]){
            vector<vector<int>>::iterator it=b.begin();
            it=it+i;
            b.erase(it);
        }
    }
    for(int i=0;i<b.size();i++){
        for(int j=0;j<b[i].size();j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
}
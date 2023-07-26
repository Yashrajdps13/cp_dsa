#include<iostream>
#include<algorithm>
using namespace std;
bool isSorted(int a[],int b,int e){
    if(a[b]<=a[e]){
        return 1;
    }
    return 0;
}
int solve(int a[],int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int t=(low+high)/2;
        if(a[t]==target){
            return t;
        }
        if(isSorted(a,low,t)){
            if(target>=a[low]&&target<=a[t]){
                high=t-1;
            }else{
                low=t+1;
            }
        }else{
            if(target>=a[t]&&target<=a[high]){
                low=t+1;
            }else{
                high=t-1;
            }
        }
    }
    return -1;
}
int main(){
    int a[]={3,1};
    int n=sizeof(a)/sizeof(a[0]);
    int target=1;
    cout<<solve(a,n,target);
}
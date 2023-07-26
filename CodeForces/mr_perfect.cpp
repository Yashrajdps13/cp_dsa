#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> sec(n);
        vector<string> skill(n);
        for(int i=0;i<n;i++){
            cin>>sec[i]>>skill[i];
        }
        long long one_zero=INT_MAX,zero_one=INT_MAX,one_one=INT_MAX;
        long long dur=0;
        for(int i=0;i<n;i++){
            if(skill[i]=="10"){
                one_zero=min(one_zero,sec[i]);
            }else if(skill[i]=="01"){
                zero_one=min(zero_one,sec[i]);
            }else if(skill[i]=="11"){
                one_one=min(one_one,sec[i]);
            }
        }
        dur=zero_one+one_zero;
        long long x=min(dur,one_one);
        if(x==INT_MAX){
            x=-1;
        }
        cout<<x<<"\n";;
    }
}
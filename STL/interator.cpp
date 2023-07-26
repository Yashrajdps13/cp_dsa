#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    vector<int>::iterator it=arr.begin();
    vector<int>::reverse_iterator it_1=arr.rbegin();
    //cout<<max(*it,*it_1);
    // for(auto it=arr.begin();it!=arr.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // it+=2;
    arr.erase(arr.end()-1);
    cout<<*it_1;
    cout<<endl;
    for(auto i : arr){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

}
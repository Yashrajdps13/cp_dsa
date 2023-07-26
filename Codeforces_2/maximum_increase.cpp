#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=1;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(0);
    int i=0;
    while(i<n-1){
        if(a[i]<a[i+1]){
            p++;
        }else{
            b.push_back(p);
            p=1;
        }
        i++;
    }
    b.push_back(p);
    vector<int>::iterator it=b.begin();
    vector<int>::iterator it_1;
    for(it_1=b.begin();it_1!=b.end();it_1++){
        if(*it_1>*it){
            it=it_1;
        }
    }
    cout<<*it;
}
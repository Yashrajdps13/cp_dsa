#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    long long n;
    cin>>n;
    while(n>0){
        a.push_back(n%10);
        n/=10;
    }
    int l=a.size();
    int temp;
    for(int i=0;i<=l/2;i++){
        temp=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=temp;
    } 
    int i=l-1;
    int j=0;
    vector<int> b;
    while(i>=0){
        b.push_back(a[i]);
        b.push_back(a[j]);
        i--;
        j++;
    }
        for(int i:b){
            cout<<i;
            i++;
        }
}
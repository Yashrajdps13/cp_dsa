#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    string a;
    getline(cin,a);
    int len=a.size();
    int p=0;
    for(int i=1,k=i;i<len-1 && k<len-1;i=i+3,k=k+3){
        if(k>0){
            p++;
        }
    }
    string b[p];
    for(int i=1,j=0,k=i;i<len-1 && j<p && k<len-1;i=i+3,j++,k=k+3){
        b[j]=a[k];
    }
    int q=0;
    sort(b,b+p);
    for(int i=0;i<p;i++){
        if(b[i]==b[i+1]){
            q++;
        }
    }
    cout<<p-q;
    return 0;
}
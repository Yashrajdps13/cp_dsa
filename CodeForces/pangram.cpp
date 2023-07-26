#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

void sort_string(string &a){
    sort(a.begin(),a.end());
}

int main(){

    int n;
    cin>>n;
    string a;
    cin>>a;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    int p=0;
    sort_string(a);
    for(int i=0,j=i+1;i<n-1 && j<n-1;i++,j++){
        if(a[i]==a[j]){
            p++;
        }
    }
    if(n-p==26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
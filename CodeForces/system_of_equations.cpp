#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i=0;
    int j=0;
    int q=0;
    int l=max(m,n);
    while(j<=l){
        while(i<=l){
            int x=(i*i)+j;
            int y=(j*j)+i;
            if(x==n && y==m){
                q++;
                break;
            }
            i++;
        }
        j++;
        i=0;
    }
    cout<<q;
}
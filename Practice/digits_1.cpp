#include<iostream>
using namespace std;
int by(int a){
    int res=a;
    int d[4];
    int p=0;
    while(a>0){
    for(int i=0;i<4;i++){        
            d[i]=a%10;
            a=a/10;
        }
    }
    for(int i=0,j=0;i<4 && j<4;i++,j++){
            if(d[i]==d[j]){
                p++;
            }
        }
    // while(res>=a){
    //     if(p==0){
    //         break;
    //     }else{
    //         res=res+1;
    //     }
    // }
    
    return p;
}
int main(){
    int m;
    cin>>m;
    cout<<by(m);
}
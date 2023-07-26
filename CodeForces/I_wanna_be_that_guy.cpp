#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int t;
    cin>>t;
    int a,b;
    cin>>a;
    int x[a];
    for(int i=0;i<a;i++){
        cin>>x[i];
    }
    cin>>b;
    int y[b];
    for(int i=0;i<b;i++){
        cin>>y[i];
    }
    int total[a+b];
    for(int i=0;i<a;i++){
        total[i]=x[i];
    }
    for(int i=a,j=0;i<a+b && j<b;i++,j++){
        total[i]=y[j];
    }
    sort(total,total+(a+b));
    for(int i=0;i<a+b-1;i++){
        if(total[i]==total[i+1]){
            total[i]=0;
        }
    }
    sort(total,total+(a+b));
    int p=0;
    for(int i=0;i<a+b;i++){
        if(total[i]==0){
            p++;
        }
    }
    // int final[a+b-p];
    // for(int i=0;i<a+b-p;i++){
    //     final[i]=total[i+p];
    // }
    // for(int i=0;i<a+b-p;i++){
    //     cout<<final[i]<<" ";
    // }
    if(a+b-p==t){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }

    // if(final[a+b-p-1]==t){
    //     cout<<"I become the guy.";
    // }else{
    //     cout<<"Oh, my keyboard!";
    // }

    return 0;
}
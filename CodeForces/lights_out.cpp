#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int b[5][5];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            b[i][j]=1;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]%2==1){
                b[i+1][j+1]=abs(b[i+1][j+1]-1);
                b[i+1][j]=abs(b[i+1][j]-1);
                b[i+1][j+2]=abs(b[i+1][j+2]-1);
                b[i][j+1]=abs(b[i][j+1]-1);
                b[i+2][j+1]=abs(b[i+2][j+1]-1);
            }
        }
    }
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cout<<b[i][j];
        }
        cout<<"\n";
    }
}
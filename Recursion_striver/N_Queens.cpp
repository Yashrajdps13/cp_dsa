#include <iostream>
#include <vector>
using namespace std;
bool check(int row,int col,vector<string> &board,int n){
    int i=row;
    int j=col;
    while(i>=0&&j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }
    i=row;
    j=col;
    while(i<n&&j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }
    i=row;
    j=col;
    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }
    return true;
}
void solve(vector<string> &board,int col,int n){
    if(col==n){
        for(auto k:board){
            cout<<k<<"\n";
        }
        cout<<"\n";
        return;
    }
    for(int row=0;row<n;row++){
        if(check(row,col,board,n)){
            board[row][col]='Q';
            solve(board,col+1,n);
            board[row][col]='.';
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
   solve(board,0,n);
}
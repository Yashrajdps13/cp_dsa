#include <iostream>
#include <vector>
using namespace std;
bool check(int row,int col,vector<string> &board,int n){
    int i=row;
    int j=col;
        if(i+2<n&&j+1<n){
        if(board[i+2][j+1]=='K'){
            return false;
        }}
        if(i+2<n&&j-1>=0){
        if(board[i+2][j-1]=='K'){
            return false;
        }}
        if(i+1<n&&j+2<n){
        if(board[i+1][j+2]=='K'){
            return false;
        }}
        if(i+1<n&&j-2>=0){
        if(board[i+1][j-2]=='K'){
            return false;
        }}
        if(i-1>=0&&j+2<n){
        if(board[i-1][j+2]=='K'){
            return false;
        }}
        if(i-1>=0&&j+2<n){
        if(board[i-1][j+2]=='K'){
            return false;
        }}
        if(i-2>=0&&j+1<n){
        if(board[i-2][j+1]=='K'){
            return false;
        }}
        if(i-2>=0&&j-1>=0){
        if(board[i-2][j-1]=='K'){
            return false;
        }}
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
            board[row][col]='K';
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
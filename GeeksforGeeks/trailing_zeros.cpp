#include <iostream>
using namespace std;
// int num_z(int n){
//     int p=1;
//     int c=0;
//     for(int i=1;i<=n;i++){
//         p=p*i;
//     }
//     while(p%10==0){
//         c++;
//         p/=10;
//     }
//     return c;
// }
// int main(){

//     int t;
//     cin>>t;
//     cout<<num_z(t);


// }
int num_z(int n){
    int t=0;
    for(int i=5;i<=n;i=i*5){
        t=t+n/i;
    }
    return t;
}
int main(){
    int a;
    cin>>a;
    cout<<num_z(a);
}
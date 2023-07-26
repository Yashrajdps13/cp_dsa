#include <iostream>
using namespace std;
// int factorial(int n){
//     int t=1;
//     for (size_t i = 1; i <=n; i++)
//     {
//         t*=i;
//     }
    
//     return t;
// }
// int main(){
//     int a;
//     cin>>a;
//     cout<<factorial(a);
// }
int factorial(int n){
    if(n==0)
    return 1;
    return n*factorial(n-1);
}
int main(){
    int t;
    cin>>t;
    cout<<factorial(t);
}
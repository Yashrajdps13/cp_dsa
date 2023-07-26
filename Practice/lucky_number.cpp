// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     int p=0;
//     while(a>0){
//         a/10;
//         p++;
//         a/=10;
//     }
//     cout<<p<<endl;
// }
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=0;
    int arr[p];
    
    while(n>0){
        n/10;
        p++;
        n/=10;
    }
    cout<<p <<endl;
    cout<<n;
    return 0;
}
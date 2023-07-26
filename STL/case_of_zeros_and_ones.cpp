// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     vector<int>::iterator it=a.begin();
//     while(it!=a.end()){
//         if(*it^*(it+1)==1){
//             a.erase(it);
//             a.erase(it+1);
//             it++;
//         }
//         it++;
//     }
//     cout<<a.size(); 
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    string b;
    cin>>n;
    cin>>b;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
    int p=0;
    int q=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            p++;
        }
    }
    q=n-p;
    cout<<n-2*min(p,q);
}
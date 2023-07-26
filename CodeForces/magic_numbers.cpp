// #include <iostream>
// using namespace std;
// int main(){
//     string a;
//     cin>>a;
//     int l=a.size();
//     int i=0,p=0,q=0,r=0;
//     while(i<l){
//         if(a[i]!='1' && a[i]!='4'){
//             break;
//         }else{
//         if(a[i]=='1' && a[i+1]!='4'){
//             p++;
//             i++;
//         }
//         else if(a[i]=='1' && a[i+1]=='4' && a[i+2]!='4'){
//             q=q+2;
//             i=i+2;
//         }
//         else if(a[i]=='1' && a[i+1]=='4' && a[i+2]=='4'){
//             r=r+3;
//             i=i+3;
//         }
//         }
//     }
//     int f=p+q+r;
//     if(f==l){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
    
// }


#include <iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int x=0;
    int l=a.size();
    int i=0,p=0,q=0,r=0;
    while(i<l){
        if(a[i]!='1' && a[i]!=4){
            break;
        }else{
        if(a[i]=='1' && a[i+1]!='4'){
            p++;
            i++;
        }
        if(a[i]=='1' && a[i+1]=='4' && a[i+2]!='4'){
            q=q+2;
            i=i+2;
        }
        if(a[i]=='1' && a[i+1]=='4' && a[i+2]=='4'){
            r=r+3;
            i=i+3;
        }
        }
    }
    if(a=="1" || a=="14" || a=="144"){
        cout<<"YES";
    }else{
        int f=p+q+r;
        if(f==l){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
}




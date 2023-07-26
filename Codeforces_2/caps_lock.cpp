#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int u=0,l=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            u++;
        }else{
            l++;
        }
    }
    if(s.size()==1){
        if(islower(s[0])){
            s[0]=toupper(s[0]);
        }else{
            s[0]=tolower(s[0]);
        }
        cout<<s;
        return 0;
    }
    if(islower(s[0])&&isupper(s[1])&&l==1){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s[0]=toupper(s[0]);
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
    }else if(u==s.size()){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }else{
        cout<<s;
    }
}
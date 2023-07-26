#include <iostream>
using namespace std;
int main(){
    char h='a';
    char e='a';
    char l='a';
    char l_='a';
    char o='a';
    string w=" a";
    char o_='a';
    char r='a';
    char l_2='a';
    char d='a';
    while(h!='i'){
        cout<<h<<"\n";
        h++;
    }
    h--;
    while(e!='f'){
        cout<<h<<e<<"\n";
        e++;
    }
    e--;
    while(l!='m'){
        cout<<h<<e<<l<<"\n";
        l++;
    }
    l--;
    while(l_!='m'){
        cout<<h<<e<<l<<l_<<"\n";
        l_++;
    }
    l_--;
    while(o!='p'){
        cout<<h<<e<<l<<l_<<o<<"\n";
        o++;
    }
    o--;
    while(w[1]!='x'){
        cout<<h<<e<<l<<l_<<o<<w<<"\n";
        w[1]++;
    }
    w[1]--;
    while(o_!='p'){
        cout<<h<<e<<l<<l_<<o<<w<<o_<<"\n";
        o_++;
    }
    o_--;
    while(r!='s'){
        cout<<h<<e<<l<<l_<<o<<w<<o_<<r<<"\n";
        r++;
    }
    r--;
    while(l_2!='m'){
        cout<<h<<e<<l<<l_<<o<<w<<o_<<r<<l_2<<"\n";
        l_2++;
    }
    l_2--;
    while(d!='e'){
        cout<<h<<e<<l<<l_<<o<<w<<o_<<r<<l_2<<d<<"\n";
        d++;
    }
    o_--;
}

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    int d=0;
    while(a.size()>0){
        vector<int>::iterator it_1=a.begin();
        vector<int>::reverse_iterator it_2=a.rbegin();;
        s+=max(*it_1,*it_2);
        if(*it_1>*it_2){
            a.erase(it_1);
        }else{
            a.erase(a.end()-1);
        }
        if(a.size()==0){
            break;
        }
        vector<int>::reverse_iterator it_3=a.rbegin();
        d+=max(*it_1,*it_3);
        if(*it_1>*it_3){
            a.erase(it_1);
        }else{
            a.erase(a.end()-1);
        }
    }
    cout<<s<<" "<<d;
}
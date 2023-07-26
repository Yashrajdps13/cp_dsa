#include <iostream>
#include <list>
using namespace std;
void showlist(list<int> lt){
    list<int>::iterator it=lt.begin();
    for(it=lt.begin();it!=lt.end();it++){
        cout<<*it<<"\t";
    }
}
int main(){
    list<int> lt,lt_0;
    for(int i=0;i<10;i++){
        lt.push_back(i*2);
        lt_0.push_front(i*3);
    }
    cout<<"lt: ";
    showlist(lt);
    cout<<endl;
    cout<<"lt_0: ";
    showlist(lt_0);
    cout<<endl;
    lt_0.pop_back();
    cout<<"lt_0(reverse): ";
    lt_0.sort();
    showlist(lt_0);
    cout<<endl;
}

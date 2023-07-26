#include<iostream>
#include<list>
using namespace std;
struct MyHash{
    int length;
    list<int> *table;
    MyHash(int l){
        length=l;
        table=new list<int>[l];
    }
    void insert(int key){
        int i=key%length;
        table[i].push_back(key);
    }
    bool search(int key){
        int i=key%length;
        for(auto k:table[i]){
            if(k==key){
                return true;
            }
        }
        return false;
    }
    void remove(int key){
        int i=key%length;
        table[i].remove(key);
    }
};
int main(){
    MyHash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(17);
    mh.insert(6);
    mh.insert(3);
    cout<<boolalpha;
    cout<<mh.search(3)<<"\n";
    mh.remove(10);
    cout<<mh.search(10)<<"\n";
}
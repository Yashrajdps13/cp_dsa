#include <iostream>
#include <vector>
using namespace std;
struct MyHash{
    vector<int> table;
    int length,size;
    MyHash(int l){
        length=l;
        for(int i=0;i<l;i++){
            table.push_back(-1);
        }
    }
    int hash(int key){
        return key%length;
    }
    bool search(int key){
        int h=hash(key);
        int i=h;
        while(table[i]!=-1){
            if(table[i]==key){
                return true;
            }
            i=(i+1)%length;
            if(i==h){
                return false;
            }
        }
    }
    bool erase(int key){
        int h=hash(key);
        int i=h;
        while(table[i]!=-1){
            if(table[i]==key){
                table[i]=-2;
                return true;
            }
            i=(i+1)%length;
            if(i==h){
                return false;
            }
        }
    }
    bool insert(int key){
        int h=hash(key);
        if(size==length){
            return false;
        }
        while(table[h]!=-1&&table[h]!=-2&&table[h]!=key){
            h=(h+1)%length;
        }
        if(table[h]==key){
            return false;
        }else{
            table[h]=key;
            size++;
            return true;
        }
    }
        
};
	int main() 
	{ 
	    MyHash mh(7);
	    mh.insert(49);
	    mh.insert(56);
	    mh.insert(72);
	    if(mh.search(56)==true)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    mh.erase(56);
	    if(mh.search(56)==true)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	} 
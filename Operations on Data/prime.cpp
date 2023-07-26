#include <iostream>

using namespace std;
bool prime(int c){
    int x;
		for(x=2;x<c;x++){
			if(c%x==0){
				return true;
			}
		}
        return false;
	}

int main(){
	int c;
	cout<<"Enter your number ";
	cin>>c;
	if(prime(c)==0){
        cout<<c<<" is not a prime number";
    }else{
        cout<<c<<" is a prime number";
    }
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a[2];
	cin>>n;
	while(n--){
	    cin>>a[0]>>a[1];
        if(a[0]==a[1]){
            if(a[0]>0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }

    }
}

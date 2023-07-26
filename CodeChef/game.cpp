#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a=x*y;
	    if(x<=3){
	        cout<<a*y<<endl;
	    }else{
	        int b=x/3;
	        if(x%3==0){
	            cout<<(b-1)*z+a<<endl;
	        }else{
	            cout<<b*z+a<<endl;
	        }
	    }
    }
	return 0;
}


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n;
	while(n--){
	    cin>>a>>b;
        int i=0;
	    if(n%2==0){
	        if(b>a/2&&b<a){
	            cout<<a-b<<endl;
	        }else if(b<=a/2&&b>0){
	            cout<<b<<endl;
	        }else if(b==0 || b==a){
	            cout<<i<<endl;
	        }
	}
	}
	return 0;
}

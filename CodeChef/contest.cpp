#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a;
	cin>>t;
	while(t--){
	    cin>>a;
        int b=a/100;
        int c=a%100;
        int d=b+c;
        if(d>10){
            cout<<-1<<endl;
        }else{
            cout<<c+b<<endl;
        
        }
	}
	return 0;
}

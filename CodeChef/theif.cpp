#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n;
	while(n--){
	    cin>>a>>b;
		cout<<abs(a-b)<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
        if(m<n){
            cout<<(n-m)+n<<endl;
        }else if(m=n){
            cout<<m<<endl;
        }else{
            cout<<n<<endl;
        }
	}
	return 0;
}

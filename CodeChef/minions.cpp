#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,a[n];
	    cin>>n>>k;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
        int p=0;
	    for(int i=0;i<n;i++){
	        if((a[i]+k)%7==0){
	            p++;
	        }
	        }
            cout<<p<<endl;
	    }

	
	return 0;
}

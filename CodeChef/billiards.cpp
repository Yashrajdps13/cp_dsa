#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    int c[t];
	while(t--){
	    int a,b;
	    cin>>a>>b;
        for(int i=0;i<t;i++){
	    c[i]=abs(a-b);
        }
	}
	for (int i = 0; i < t; i++) {
	    /* code */
	    cout<<c[i]<<endl;
	}
	return 0;
}

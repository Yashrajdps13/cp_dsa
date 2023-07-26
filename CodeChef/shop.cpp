#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        // cout<<a[1]+a[2]<<endl;
        int sum=0;
        for(int j=1;j<3;j++){
            sum+=a[j];
        }
        cout<<sum<<endl;
    }
	return 0;
}

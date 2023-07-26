#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        int a[n];
        int sum=0;
        int m=0;
        for (size_t i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==-1){
                sum++;
            }else{
                m++;
            }
        }
        if((m-sum)%2==0){
            cout<<abs(m-sum)/2<<endl;
        }else{
            cout<<0<<endl;
        }
        
	}
	return 0;
}

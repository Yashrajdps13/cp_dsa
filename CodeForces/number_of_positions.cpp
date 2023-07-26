#include <iostream>
using namespace std;
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int i=1;
	int count=0;
	while(i<=n){
		if(i-1>=a){
			if(n-i<=b){
				count++;
			}
		}
		i++;
	}
	cout<<count;
	return 0;
}
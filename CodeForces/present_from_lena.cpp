#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m=2*n+1;
	int i=0;
	while(i<=n){
		for(int j=0;j<2*(n-i);j++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<j<<" ";
		}
		for(int j=i-1;j>=0;j--){
			if(j==0){
				cout<<j;
			}else{
			cout<<j<<" ";
			}
		}
		cout<<"\n";
		i++;
	}
	i=n-1;
	while(i>-1){
		for(int j=0;j<2*(n-i);j++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<j<<" ";
		}
		for(int j=i-1;j>=0;j--){
			if(j==0){
				cout<<j;
			}else{
			cout<<j<<" ";
			}
		}
		cout<<"\n";
		i--;
	}
}
#include <iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	int l=a.size();
	int i=0;
	while(i<l){
		if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B'){
			i+=3;
		}else{
			cout<<a[i];
			if(a[i+1]=='W' && a[i+2]=='U' && a[i+3]=='B'){
				cout<<" ";
			}
			i++;
		}
	}
	return 0;
}
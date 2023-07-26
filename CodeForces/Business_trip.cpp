#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int k;
	cin>>k;
	int a[12];
	for(int i=0;i<12;i++){
		cin>>a[i];
	}
	int q=0;
	int h=0;
	sort(a,a+12);
	int i=11;
	while(i>=0){
		if(h<k){
			q++;
			h+=a[i];
		}else{
			break;
		}
		i--;
	}
	if(h<k){
		cout<<-1;
	}else{
		cout<<q;
	}
	return 0;
}
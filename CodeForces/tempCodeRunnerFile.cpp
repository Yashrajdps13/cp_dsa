#include <iostream>
using namespace std;
int main(){
	string field;
	cin>>field;
	int l=field.size();
	int one=0,zero=0,i=0;
	while(i<l){
		if(field[i]=='1'){
			one++;
			if(one>=7){
				cout<<"YES";
				return 0;
			}
			if(field[i+1]=='0'){
				one=0;
			}
			i++;
		}else if(field[i]=='0'){
			zero++;
			if(zero>=7){
				cout<<"YES";
				return 0;
			}			
			if(field[i+1]=='1'){
					zero=0;
			}
			i++;
		}
	}
	cout<<"NO";
	return 0;
}













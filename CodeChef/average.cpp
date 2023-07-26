#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a[3];
	cin>>n;
	while(n--){
	    for(int i,j=0;i<3&&j<3;i++&&j++){
	    cin>>a[i];
        if(((a[i]+a[j])/2)>=35){
            cout<<"PASS"<<endl;
        }else{
            cout<<"FAIL"<<endl;
        }
}
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a;
	while(n--){
	int begin=0;
	int level=0;        
	    cin>>a;
	    int b[a];
	    for(int i=0;i<a;i++){
	     cin>>b[i];
	     if(b[i]<1000){
	         begin++;
	     }else{
	         level++;

	     }
	    }
	    cout<<level<<endl;
	}
	return 0;
}

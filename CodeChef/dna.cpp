#include <iostream>
using namespace std;

int main(){
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char a[n];
	    cin>>a;
	    for(int i=0;i<n;i++){
	        if(a[i]=='A'){
	            a[i]='T';
	        }
	        else if(a[i]=='T'){
	            a[i]='A';
	        }
	        else if(a[i]=='C'){
	            a[i]='G';
	        }
	        else if(a[i]=='G'){
	            a[i]='C';
	        }
	    }
	    for(int j=0;j<n;j++){
	        cout<<a[j];
	    }
	    cout<<endl;
	
	}
	
}

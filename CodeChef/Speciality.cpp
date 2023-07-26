#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int n,a[3];
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a[0]>>a[1]>>a[2];
	    
	if(a[i]>a[i++]&&a[i]>a[i--]){
		int max=a[i];
		cout<<max<<endl;
	}
   }
	   // if(max==a[0]){
	   //     cout<<"Setter"<<endl;
	   // }else if(max==a[1]){
	   //     cout<<"Tester"<<endl;
	   // }else if(max==a[2]){
	   //     cout<<"Editorialist"<<endl;
	   // }
	return 0;
}
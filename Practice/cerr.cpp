#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	int number_of_odd=0;
    int number_of_even=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
        int d=a[i]%2;
        if(d==0){
            number_of_even++;
        }else{
            number_of_odd++;
        }
	}
        if(number_of_even>number_of_odd){
        cout<<"READY FOR BATTLE"<<endl;
        }else{
        cout<<"NOT READY"<<endl;
            }
	return 0;
}

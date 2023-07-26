#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	int countOdd = 0, countEven = 0;
	while(t--) {
	    int soldier[t];
	    cin >> soldier[t];
	    if(soldier[t] % 2 == 0) {
	        countEven++;
	    }
	    else {
	        countOdd++;
	    }
	}
	
	if(countOdd >= countEven) {
	    cout << "NOT READY";
	}
	else {
	    cout << "READY FOR BATTLE";
	}
	
	return 0;
}
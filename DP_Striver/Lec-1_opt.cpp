#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int prev1=0,prev2=1;
    int count=2;
    while(1){
        int temp=prev2;
        prev2+=prev1;
        prev1=prev2;
        count++;;
        if(count==n){
            cout<<prev2;
            break;
        }
    }
    return 0;
}

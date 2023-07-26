#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool check_prime(int n) {
  bool is_prime = true;

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

int main(){
    
    int n;
    cin>>n;
    if(!(check_prime(n))){
        cout<<"np"<<endl;
    }else{
        cout<<"p"<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,4,5,6,9,9};
    int ind=lower_bound(a,a+6,6)-a;
    int ind1=upper_bound(a,a+6,6)-a;
    cout<<ind<<ind1;
}
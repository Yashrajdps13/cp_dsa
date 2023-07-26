#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total_drink=k*l;
    int dpf=total_drink/nl;
    int slices=c*d;
    int salt=p/np;
    int small=min(dpf,slices);
    cout<<min(small,salt)/n;
    return 0;
}

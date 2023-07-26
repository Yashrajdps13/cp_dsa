#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define compare(a,b) a<b
using namespace std;

void min(int n,int arr[]){
    for (size_t i = 0; i < n; i++)
    {
    int min=arr[0];
    if (arr[i]<min)
    {
        min=arr[i];
    }
    }
    cout<<min;
}
int main() {
    int n;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<min(n,a[n]);
}

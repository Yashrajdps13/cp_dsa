#include <bits/stdc++.h>
using namespace std;

int getOptimizedData(vector<int> data) {
    int result = data[0];
    for (int i = 1; i < (int)data.size(); i++) {
        result &= data[i];
    }
    return result;
}

int main() {
    // Sample Case 0: n=2, data=[1,4] -> expected 0
    vector<int> t0 = {1, 4};
    cout << "Case 0: " << getOptimizedData(t0) << " (expected 0)" << endl;

    // Sample Case 1: n=3, data=[1,1,3] -> expected 1
    vector<int> t1 = {1, 1, 3};
    cout << "Case 1: " << getOptimizedData(t1) << " (expected 1)" << endl;

    // Edge: n=1, single element
    vector<int> t2 = {7};
    cout << "Case 2: " << getOptimizedData(t2) << " (expected 7)" << endl;

    return 0;
}

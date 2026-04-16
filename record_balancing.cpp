#include <bits/stdc++.h>
using namespace std;

long long computeCost(vector<int>& a, int k) {
    long long cost = 0;
    for (int x : a) {
        int rem = x % k;
        cost += min(rem, k - rem);
    }
    return cost;
}

int getMinimumRecords(vector<int> a) {
    int n = a.size();
    int maxA = *max_element(a.begin(), a.end());

    long long ans = LLONG_MAX;

    // Try small k
    for (int k = 2; k * k <= maxA; k++) {
        ans = min(ans, computeCost(a, k));
    }

    // Try large k using a[i]/t trick
    for (int i = 0; i < n; i++) {
        for (int t = 1; t * t <= a[i]; t++) {
            int k1 = a[i] / t;
            int k2 = t;

            if (k1 >= 2)
                ans = min(ans, computeCost(a, k1));
            if (k2 >= 2)
                ans = min(ans, computeCost(a, k2));
        }
    }

    return ans;
}

int main() {
    // Sample Case 0: n=5, [3,8,7,6,4] -> expected 2
    vector<int> t0 = {3, 8, 7, 6, 4};
    cout << "Case 0: " << getMinimumRecords(t0) << " (expected 2)" << endl;

    // Sample Case 1: n=6, [3,9,7,6,5,2] -> expected 3
    vector<int> t1 = {3, 9, 7, 6, 5, 2};
    cout << "Case 1: " << getMinimumRecords(t1) << " (expected 3)" << endl;

    // Example from problem: n=5, [4,7,5,11,15] -> expected 4
    vector<int> t2 = {4, 7, 5, 11, 15};
    cout << "Case 2: " << getMinimumRecords(t2) << " (expected 4)" << endl;

    return 0;
}

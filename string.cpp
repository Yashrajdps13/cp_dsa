#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> difficulty;
    vector<pair<int, int>> a(s);
    vector<int> score(s);
    
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < s; i++) {
            cin >> score[i];
        }
        for (int i = 0; i < s; i++) {
            int num;
            cin >> num;
            a[i] = make_pair(score[i], num);
        }

        sort(a.begin(), a.end());
        int count = 0;
        for (int i = 0; i < s - 1; i++) {
            if (a[i].second > a[i + 1].second) count++;
        }
        difficulty.push_back(make_pair(count, j + 1));
    }
    
    sort(difficulty.begin(), difficulty.end());
    for (int i = 0; i < n; i++) {
        cout << difficulty[i].second << "\n";
    }
}

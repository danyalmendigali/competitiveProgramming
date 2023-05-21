#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


pair <int, int> findMinimumDifference(const vector <int>& arr) {
    int minDiff = numeric_limits<int>::max();
    pair <int, int> pair;

    for(int i = 0; i < arr.size() - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);

        if(diff < minDiff) {
            minDiff = diff;
            pair = make_pair(i, i + 1);
        }
    }
    return pair;

}

void solve() {
    int n;
    cin >> n;
    vector <int> array (n);
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    pair <int, int> result = findMinimumDifference(array);
    cout << result.first << " " <<  result.second << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();





   return 0;
}



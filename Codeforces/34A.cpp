#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n;
    cin >> n;
    vector <int> heights (n);
    for(int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    int minDiff = abs(heights[0] - heights[n - 1]);
    int soldier1 = 1;
    int soldier2 = n;

    for(int i = 0; i < n - 1; i++) {
       int diff = abs(heights[i] - heights[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            soldier1 = i + 1;
            soldier2 = i + 2;
        }
    }

    cout << soldier1 << " " << soldier2 << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();





   return 0;
}



#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define ar array

const int math = 2, programming = 1, sport = 3;

void solve() {
    int n, temp;
    cin >> n;

    vector <int> a1, a2, a3;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        if(temp == programming) {
            a1.push_back(i + 1);
        }
        else if(temp == math) {
            a2.push_back(i + 1);
        }
        else {
            a3.push_back(i + 1);
        }
    }

        int res = min(a1.size(), min(a2.size(), a3.size()));
        cout << res << endl;

        for(int i = 0; i < res; i++) {
            cout << a1[i] << " " << a2[i] << " " << a3[i] << endl;
        }






}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}





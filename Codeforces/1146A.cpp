#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    string s;
    cin >> s;
    int a = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            a++;
        }
    }

    int f = min(2 * a - 1, (int)s.size());
    cout << f << endl;


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();






   return 0;
}

#include <bits/stdc++.h>

#define ll long long
#define ar array

using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
    string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    string substring;
    cin >> substring;

    regex pattern(substring);

    if (regex_search(s, pattern)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
       }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();


    return 0;
}

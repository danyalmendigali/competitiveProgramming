#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n;
    string t;
    cin >> n >> t;

    string s = "";
    int len = 0;
    int count = 1;

    while (len < n) {
        s += t[len];
        len += count;
        count++;
    }

    cout << s << endl;




}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();






   return 0;
}





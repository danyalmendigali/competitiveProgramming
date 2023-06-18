#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define PI 3.1415926535897932384626
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define sz(x) x.size()

int solve(int x)
{
    int cnt = ((x % 10) - 1) * 10;

    string s = to_string(x);
    cnt += (sz(s) * (sz(s) + 1) / 2);

    return cnt;
}


int main() {
    FIO;

    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;
        cout << solve(x) << "\n";
    }

    return 0;
}

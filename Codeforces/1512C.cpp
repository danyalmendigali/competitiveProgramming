#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

bool solve_2(string &s, int a, int b) {
    int n = s.sz;
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] == '?' && s[n - i - 1] != '?') {
            s[i] = s[n - i - 1];
        } else if (s[i] != '?' && s[n - i - 1] == '?') {
            s[n - i - 1] = s[i];
        }
    }

    int count0 = 0, count1 = 0;
    for (char c : s) {
        if (c == '0') count0++;
        if (c == '1') count1++;
    }

    if (count0 > a || count1 > b) return false;
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] == '?' && s[n - i - 1] == '?') {
            if (count0 + 2 <= a) {
                s[i] = s[n - i - 1] = '0';
                count0 += 2;
            } else if (count1 + 2 <= b) {
                s[i] = s[n - i - 1] = '1';
                count1 += 2;
            } else {
                return false;
            }
        }
    }
    if (n % 2 == 1 && s[n / 2] == '?') {
        if (count0 < a) {
            s[n / 2] = '0';
            count0++;
        } else if (count1 < b) {
            s[n / 2] = '1';
            count1++;
        } else {
            return false;
        }
    }

    return count0 == a && count1 == b;
}


void solve()
{
        int a, b;
        string s; cin >> a >> b >> s;
        if (solve_2(s, a, b)) {
            cout << s << endl;
            return;
        }
        cout << -1 << endl;




}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}

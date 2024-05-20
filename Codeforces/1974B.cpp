#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <numeric>
#include <cmath>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

set<char> st1;
map<char, int> mp1, mp2;

void solve()
{
        int n; cin >> n;
        string b; cin >> b;

        set<char> unique_chars(b.begin(), b.end());
        string r(unique_chars.begin(), unique_chars.end());

        unordered_map<char, char> mp;
        for (int i = 0; i < r.sz; i++) {
            mp[r[i]] = r[r.sz - 1 - i];
        }

        string new_string;
        for (char i : b) {
            new_string += mp[i];
        }

        cout << new_string << '\n';


}

signed main()
{
       cin.tie(0);
       cout.tie(0);
       ios::sync_with_stdio(false);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}

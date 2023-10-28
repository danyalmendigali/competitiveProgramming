#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;
const int square = 360;

set<int> st;
set<char> st2;
map<char, int> mp;

void solve()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> count(26);

    for (char ch : s) {
        count[ch - 'a']++;
    }

    string res;
    for (int i = 0; i < 26; i++) {
        if (count[i] % k != 0) {
            cout << -1 << endl;
            return;
        }
        res += string(count[i] / k, 'a' + i);
    }

    for (int i = 0; i < k; i++) {
        cout << res;
    }
    cout << endl;




}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while (t--)
        solve();


    return 0;
}

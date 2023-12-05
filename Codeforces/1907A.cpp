#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

void solve()
{
    string s; cin >> s;
    char r = s[0];
    int a = s[1] - '0';
    vector<string> result;
    for (int i = 1; i <= 8; i++) {
        if (i != a) {
            result.pb(r + to_string(i));
        }
    }
    for (char c = 'a'; c <= 'h'; c++) {
        if (c != r) {
            result.pb(c + to_string(a));
        }
    }
    for (int i = 0; i < result.sz; i++) {
        cout << result[i] << endl;
    }
}


signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();




    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define F first
#define S second
#define pb(a) push_back(a)
#define sz size()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

vector<int> res, res2, res3;
vector<bool> used;
set<int> st1, st2;
map<int, int> mp1, mp2;


void solve()
{
    ll n, m; cin >> n >> m;
    ll res = 0;
    for(int i = 1; i <= m - 1; i++){
        res += i;
    }
    for(int i = 0; i <= n; i++){
        res += i * m;
    }
    cout << res << endl;


}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

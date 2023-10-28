
#include <bits/stdc++.h>
#include <cmath>

#define mendigali ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
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

const int N = 2e5 + 5 , inf = 2e9 + 7;
const ll INF = 1e18 ,   mod = 1e9 + 7 , P = 6547;

map<string, ll> mp;
map<ll, ll> mp1, mp2;
ll size_arr;

void solve()
{
    mp.clear(); mp1.clear(); mp2.clear();
    ll ans = 0;
    cin >> size_arr;
    string s[size_arr + 9];
    for(ll i = 1; i <= size_arr; i++)
    {
        cin >> s[i];
        mp[s[i]]++;
        mp1[s[i][0]]++;
        mp2[s[i][1]]++;
    }

    for(ll i = 1; i <= size_arr; i++)
    {
        ans += mp1[s[i][0]] - mp[s[i]] + mp2[s[i][1]] - mp[s[i]];
    }

    ll f = ans / 2;
    cout << f << endl;


}

signed main()
{
    mendigali;

    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

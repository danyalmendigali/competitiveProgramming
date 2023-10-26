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

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.sz == s2.sz){
        cout << -1;
    }
    cout << max(s1.sz, s2.sz);
}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

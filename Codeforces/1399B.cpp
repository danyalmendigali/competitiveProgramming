#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

set<int> st1, st2;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> x1(n);
    vector<ll> x2(n);
    ll ans1 = inf, ans2 = inf;
    for(ll i = 0; i < n; i++)
    {
        cin >> x1[i];
        ans1 = min(ans1, x1[i]);
    }

    for(ll i = 0; i < n; i++)
    {
        cin >> x2[i];
        ans2 = min(ans2 , x2[i]);
    }

    for(ll i = 0; i < n; i++)
    {
        x1[i] = x1[i] - ans1;
        x2[i] = x2[i] - ans2;
    }

    ll res = 0;

    for(ll i = 0; i < n; i++)
    {
        if(x1[i] == 0 || x2[i] == 0)
        {
            res += x1[i] + x2[i];
        }
        else
        {
            ll max_e = max(x1[i], x2[i]);
            res += max_e;
        }
    }

    cout << res << endl;



}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;

    while(t--)
         solve();





    return 0;
}

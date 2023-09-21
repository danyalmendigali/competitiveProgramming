#include <cctype>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define maximum INT_MAX

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

const int SIZE = 11;

pair<int, int> p[N];

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 1, r = maximum;
    ll ans = maximum;

    while(l <= r)
    {
        ll mid = (r - l) / 2 + l;
        ll res = 0;

        for(ll &i : a)
        {
            if(mid > i)
            {
                res += (mid - i);
            }
        }
        if(res <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

signed main()
{

    optimus_prime;

    int t;
    cin >> t;
    while(t--)
         solve();





    return 0;
}

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

map<ll, ll> mp;
set<char> st;
vector<bool> was;


void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> m1(5), m2(5);
    for(ll i = 1; i <= n; i++)
    {
        ll r = i % 5;
        m1[r]++;
    }
    for(ll i = 1; i <= m; i++)
    {
        ll r = i % 5;
        m2[r]++;
    }

    ll res = 0;
    for(ll i = 0; i < 5; i++)
    {
        for(ll j = 0; j < 5; j++)
        {
            if((i + j) % 5 == 0)
            {
                res += m1[i] * m2[j];
            }
        }
    }
    cout << res << endl;


}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();





    return 0;
}

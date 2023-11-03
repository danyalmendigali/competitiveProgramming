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

set<int> st;
map<ll , ll> mp , mp1 , mp2;
ll x[N], x1[N];
vector<ll> v, v1;

void solve()
{
    ll n; cin >> n;
    ll b , mx = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
        mp[x[i]]++;
        v.pb(x[i]);
        mp1[x[i]]++;
    }

    for(int i = 1; i <= n; i++)
    {
        cin >> x1[i];
        mp[x1[i]]++;
        v.pb(x1[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        if(mp[x1[i]] % 2 == 1 || mp[x[i]] % 2 == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    ll cnt = 0;
    sort(all(v));
    reverse(all(v));
    for(int i = 0; i < v.sz; i++)
    {
        if(i % 2 == 0)
        {
            v1.pb(v[i]);
            mp2[v[i]]++;
        }
    }

    for(int i = 0; i < v1.sz; i++)
    {
        if(mp2[v1[i]] > mp1[v1[i]])
        {
            cnt += mp2[v1[i]] - mp1[v1[i]];
            mp2[v1[i]] = 0;
        }
    }

    cout << cnt << endl;



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

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


ll countA = 0;

set<int> st;
map<ll, ll> mp;

void solve()
{
    mp.clear();
    int n; cin >> n;
    ll x[n + 9], x1[n + 9];
    vector<int> x2(n * 2);
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
        x2.pb(x[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> x1[i];
        x2.pb(x1[i]);
    }
    ll sum = 0;
    sort(all(x2));

    for(int i = 0; i < x2.sz; i++)
    {
        sum += abs(x2[i] - x2[i + 1]);
        i += 2;
    }

    cout << sum << endl;




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

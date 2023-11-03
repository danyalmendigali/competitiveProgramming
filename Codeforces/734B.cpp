#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i <= b; i++)
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

void solve()
{
    ll k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    ll ans1 = min(k2, min(k5, k6));
    ll r = ans1 * 256;

    ll g = k2 - ans1;

    ll res2 = min(g, k3);
    ll h = res2 * 32;


    cout << r + h << endl;



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

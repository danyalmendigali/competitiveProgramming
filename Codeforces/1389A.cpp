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

set <string> st;
map<string, int> mp;
map<string, int> mp2;

void numLight(ll n, ll m)
{
    if(m < n * 2)
    {
        cout << -1 << " " << -1 << endl;
    }
    else
    {
        cout << n << " " << n * 2 << endl;
    }

}

void solve()
{
    ll n, m;
    cin >> n >> m;
    numLight(n, m);

}

signed main()
{
    optimus_prime;
    ll t;
    t = 1;
    cin >> t;
    while(t--)
         solve();





    return 0;
}

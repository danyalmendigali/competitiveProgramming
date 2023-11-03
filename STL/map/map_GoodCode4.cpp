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
map<string , ll> mp;
map <char, ll> mp1 , mp2;
ll x[N], x1[N];
vector<ll> v, v1;

void solve()
{
    mp.clear(); mp1.clear(); mp2.clear();
    ll n, sum = 0; cin >> n;
    string s[n + 9];
    for(int i = 1; i <= n; i++)
    {
        cin >> s[i];
        mp[s[i]]++;
        mp1[s[i][0]]++;
        mp2[s[i][1]]++;
    }

    for(int i = 1; i <= n; i++)
    {
        string to = s[i];
        sum += mp1[to[0]] - mp[to];
        sum += mp2[to[1]] - mp[to];
    }

    cout << sum / 2 << endl;


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

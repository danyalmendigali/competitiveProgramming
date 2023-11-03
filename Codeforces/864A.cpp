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
map<int, int> mp;


void solve()
{
    mp.clear();
    int n; cin >> n;
    int dp[n + 9];
    pair<ll ,ll> p[n + 9];
    for(int i = 1; i <= n; i++)
    {
        cin >> dp[i];
        mp[dp[i]]++;
    }
    int index = 1;
    int g = 0;
    for(auto i : mp)
    {
        p[index].F = i.F;
        p[index].S = i.S;
        g += 2;
        index++;
    }

    if(g / 2 == 2 && p[1].S == p[2].S)
    {
        cout << "YES" << endl;
        cout << p[1].F << " " << p[2].F << endl;
    }
    else
    {
        cout << "NO" << endl;
    }



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

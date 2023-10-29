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
const int INF = 1e9 + 9;
const int mod = 1e5 + 9;
const int square = 360;

map<int, int> mp1;
map<int, int> mp2;


void solve()
{
    mp1.clear(); mp2.clear();
    int n; cin >> n;
    vector<int> dp1, dp2;
    pair<int, int> p[n + 9];
    for(int i = 0; i < n; i++)
    {
        cin >> p[i].F >> p[i].S;
        dp1.pb(p[i].F);
        dp2.pb(p[i].S);
    }
    int a1 = 0, a2 = 0, b1 = 0, b2 = 0;

    for(int i = 0; i < dp1.sz; i++)
    {
        if(dp1[i] == 0)
        {
            a1++;
        }
        if(dp1[i] == 1)
        {
            a2++;
        }

        if(dp2[i] == 0)
        {
            b1++;
        }
        if(dp2[i] == 1)
        {
            b2++;
        }
    }

    int mn1 = min(a1, a2);
    int mn2 = min(b1, b2);
    cout << mn1 + mn2 << endl;



}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();


    return 0;
}


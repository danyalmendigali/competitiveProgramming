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
map<ll , ll> mp;
ll x[N];

void solve()
{
    mp.clear();
    int n;
    cin >> n;
    pair<ll , ll> p[n + 9];
    for(int i = 1; i <= n; i++)
    {
        cin >> p[i].F;
        p[i].S = i;
        mp[p[i].F]++;
    }

    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }

    sort(p + 1, p + 1 + n);

    cout << "Map: " << endl;
    for(auto i : mp)
    {
        cout << i.F << " " << i.S << endl;
    }
    cout << "Pair(sort): " << endl;
    for(int i = 1; i <= n; i++)
    {
        cout << p[i].F << " " << p[i].S << endl;
    }

    if(p[1].F == p[n].F)

    for(int i = 1 ; i <= n; i ++)
    {
        if(mp[p[i].F] == 1)
        {
            cout << p[i].F << endl;
        }
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

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
const int size_dp = 6;


ll countA = 0;

set<pair<int, int>> st;
map<pair<ll ,ll>, int> mp;

void solve()
{
    mp.clear(); st.clear();
    int n, k;
    cin >> n >> k;
    pair<ll , ll> p[n + 9];
    for(int i = 1; i <= n; i++)
    {
       cin >> p[i].F >> p[i].S;
       st.insert({p[i].F, p[i].S});
       mp[{p[i].F, p[i].S}]++;
    }
    cout << endl << endl;

    cout << endl << endl;

    for(auto it = st.end(); it != st.begin(); --it)
    {
        cout << it -> F << " " << it -> S << endl;
    }
    cout << endl << endl;

    sort(p + 1, p + 1 + n);
    reverse(p + 1, p + 1 + n);

    int first_pair, second_pair, d;

    for(int i = 1; i <= n; i++)
    {
        if(i == k)
        {
            first_pair = p[k].F;
            second_pair = p[k].S;
        }
    }
    int ans = 0;

    for(int i = 1; i <= n; i++)
    {
        if(p[i].F == first_pair && p[i].S == second_pair)
        {
            ans++;
        }
    }

    cout << ans << endl;
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

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
ll a, b;

set<int> st;
map<ll, ll> mp;

void solve()
{
    mp.clear();
    ll n;
    cin >> n;
    ll dp[n + 9];
    pair<ll ,ll> p[n + 9];
    for(ll i = 1; i <= n; i++)
    {
        cin >> dp[i];
        p[i].F = dp[i];
        p[i].S = i;
        mp[dp[i]]++;
    }

    sort(p + 1, p + 1 + n);
    ll c = 0;

    for(auto i : mp)
    {
        a = i.F;
        b = i.S;
        c++;
        if(b == 1 && c == 1)
        {
            cout << p[1].S << endl;
            return;
        }
    }
    cout << "Still Rozdil" << endl;




    /*

    if(a > 1)
    {
        cout << "Still Rozdil" << endl;
        return;
    }
    if(a == 1)
    {
        for(int i = 0; i < n; i++)
        {
            if(p[i].F == b)
            {
                cout << p[i].F << endl;
                return;
            }
        }
    }
    */


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

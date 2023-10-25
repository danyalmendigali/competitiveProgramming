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
    ll n, x = 0, y = 0; cin >> n;
    pair<ll, ll> p[n];
    for(ll i = 0; i < n; i++)
    {
        cin >> p[i].F >> p[i].S;
        if(p[i].F < 0)
        {
            x++;
        }
        else
        {
            y++;
        }
    }

    if((y <= 1) || (x <= 1))  cout << "Yes" << endl;
    else cout << "No" << endl;


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

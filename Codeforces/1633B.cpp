#include <bits/stdc++.h>
#include <algorithm>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define ins(a) insert(a)
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

int x[N];
map<ll ,ll> mp;

void solve()
{
    string s; cin >> s;
    for(ll i = 0; i < s.sz; i++)
    {
        mp[s[i] - '0']++;
    }

    if(mp[0] == mp[1])
    {
        if(s.sz == 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << mp[0] - 1 << endl;
        }
    }
    else
    {
        cout << min(mp[0], mp[1]) << endl;
    }





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

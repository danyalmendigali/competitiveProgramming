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
map<ll , ll> mp , mp1 , mp2;
ll x[N], x1[N];
vector<ll> v, v1;

void solve()
{
    ll n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> x[i];
    sort(x + 1, x + 1 + n);
    for(int i = 1;  i <+ n; i++)
    {
        if(!mp[x[i] - 1] && x[i] - 1 > 0)
        {
            st.insert(x[i] - 1);
            mp[x[i] - 1] = 1;
        }
        else if(!mp[x[i]])
        {
            st.insert(x[i]);
            mp[x[i]] = 1;
        }
        else if(!mp[x[i] + 1])
        {
            st.insert(x[i] + 1);
            mp[x[i] + 1] = 1;
        }
    }

    cout << st.sz << endl;



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

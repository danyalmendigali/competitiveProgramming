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
ll x[N];

void solve()
{
    mp.clear();
    int a, b;
    int n, mx = 0; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        st.insert(x[i]);
        mp[x[i]]++;
        mx = max(mx, mp[x[i]]);
    }

    cout << st.sz << endl;

    cout << mx << endl;


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

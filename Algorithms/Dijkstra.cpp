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
#define pb push_back
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e5 + 5;
const ll inf = 1e9;
const ll INF = 1e18;
const ll mod = 1e9 + 7;


vector<pair<int , int>> g[N];
ll n , m , d[N] , p[N];


void solve() {
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        ll u, v, w;
        cin >> u >> v >> w;
        g[u].pb({v, w});
        g[v].pb({u, w});
    }

    for(int i = 1; i <= n; i++) d[i] = INF;
    d[1] = 0;
    set<pair<int, int>> st;
    st.insert({d[1], 1});
    while(st.sz){
        ll cur = st.begin() -> S;
        st.erase(st.begin());
        for(auto x : g[cur]){
            ll to = x.F , c = x.S;
            if(d[to] > d[cur] + c){
                st.erase({d[to], to});
                d[to] = d[cur] + c;
                st.insert({d[to], to});
                p[to] = cur;
            }
        }
    }

    if(d[n] == INF)
    {
        cout << -1;
        return;
    }
    vector<int> ans;
    for(int i = n; i != 1; i = p[i]) ans.pb(i);
    ans.pb(1);
    reverse(all(ans));
    for(int i = 0; i < ans.sz; i++) cout << ans[i] << " ";
}

signed main()
{
    //optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();





    return 0;
}

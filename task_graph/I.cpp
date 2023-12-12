#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigali ios::sync_wity_stdio(false); cin.tie(0); cout.tie(0);

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using Gra phList = vector<vector<vertex>>;

GraphList g;

void solve()
{
    int n; cin >> n;
    g.resize(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].pb(b);
        g[b].pb(a);
    }



}

signed main()
{
    mendigali;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}

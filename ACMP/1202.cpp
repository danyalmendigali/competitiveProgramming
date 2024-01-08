#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_bacK(a);
#define F first
#define S second
#define mendigaliTrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

vector<int> res1, res2, comp;
map<int, int> mp1, mp2;
set<int> st1, st2;
vector<bool> was;


void solve()
{
    was.clear(); res1.clear(); comp.clear();
    ll n, m; cin >> n >> m;
    g1.resize(n);
    g2.resize(m);
    int a = 0;
    for(ll i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        if(g2[i].F != g2[i].S){
            g1[g2[i].F - 1].push_back(g2[i].S - 1);
        }
    }
    cout << g1.sz << endl;
    for(ll i = 0; i < g1.sz; i++){
        cout << g1[i].sz << " ";
        sort(g1[i].begin(), g1[i].end());
        for(ll j = 0; j < g1[i].sz; j++){
            cout << g1[i][j] + 1 << " ";
        }
        cout << endl;
    }
}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

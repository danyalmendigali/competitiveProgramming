#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define daniyaltrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

vector<int> res1, res2;
vector<bool> was;
map<int, int> mp;
set<pair<int, int>> st;
set<int> st1, st2;


GraphAdjList g1;
GraphPair g2;

void dfs(ll curr)
{
    was[curr] = true;
    res1.pb(curr + 1);
    for(int i : g1[curr]){
        if(!was[i]) dfs(i);
    }
}

void solve()
{
    st.clear(); st1.clear(); was.clear(); res1.clear();
    int n, m; cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    vector<int> dp;
    int val, val2;
    cin >> val;
    cin >> val2;
    if(val == 0 && n == 0){
        cout << "No" << endl;
        return;
    }
    if(val == 0 && n != 0){
        cout << "Yes" << endl;
        return;
    }


    while(val != 0){
        g1[val - 1].push_back(val2 - 1);
        cin >> val;
        if(val == 0){
            dfs(m - 1);
            if(res1.sz == n){
                cout << "Yes" << endl;
                return;
            }
            cout << "No" << endl;
            return;
        }
        cin >> val2;
    }



}

signed main()
{
    daniyaltrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

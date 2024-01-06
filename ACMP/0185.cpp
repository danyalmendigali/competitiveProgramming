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

vector<int> res, res2;
vector<bool> was;
map<int, int> mp;
set<pair<int, int>> st;
set<int> st1, st2;

GraphAdjList g1;
GraphPair g2;

void dfs(ll curr)
{
    was[curr] = true;
    res.pb(curr + 1);
    for(int i : g1[curr]){
        if(!was[i]) dfs(i);
    }
}


void solve()
{
    st.clear(); st1.clear();
    int n, k, res1 = 0, res2 = 0;
    cin >> n >> k;
    vector<int> dp;
    int val;
    cin >> val;
    while(val != 0){
        dp.pb(val);
        cin >> val;
    }
    pair<int, int> p[dp.sz / 2];
    int ind = 0;
    for(int i = 0; i < dp.sz - 1; i += 2){
        p[ind].F = dp[i];
        p[ind].S = dp[i + 1];
        ind++;
    }
    for(int i = 0; i < dp.sz / 2; i++){
        if(p[i].F == k){
            res1++;
        }
    }
    if(res1 == n - 1){
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

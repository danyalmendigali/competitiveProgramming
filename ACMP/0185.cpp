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
    st.clear();
    int n, k, res = 0 ; cin >> n >> k;
    int num1, num2;
    vector<int> dp;
    int i = 0;
    g2.resize(n);
    do{
        cin >> num1;
        dp.push_back(num1);

    } while(num1 != 0);

    for(int i = 0; i < dp.sz; i += 2){
        g2[i].F = dp[i]; g2[i].S = dp[i + 1];
    }
    for(pair<int, int> edge : g2){
        cout << edge.F << " " << edge.S << endl;
        g1[edge.F - 1].push_back(edge.S - 1);
    }
    for(int i = 0; i < g1.sz; i++){
        cout << i + 1 << " ";
        for(int j = 0; j < g1[i].sz; j++){
            cout << g1[i][j] << " ";
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

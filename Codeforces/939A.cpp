#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

vector<pair<int, int>> p;
set<pair<int, int>> st;
set<int> st1;
vector<int> res, res1;
vector<bool> was;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

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


void solve() {
    int n; cin >> n;
    vector<int> dp(n);
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
        dp[i]--;
    }
    for (int i = 0; i < dp.sz; i++) {
        if (dp[dp[dp[i]]] == i) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}
signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}

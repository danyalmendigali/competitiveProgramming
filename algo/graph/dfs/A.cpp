#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPairList = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPairList g2;

vector<int> res1, res2;
map<int, int> mp1, mp2;
set<int> st1, st2;
vector<bool> was;
set<pair<int, int>> stPair;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

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
    res1.clear(); was.clear();
    int n, k; cin >> n >> k;
    g1.resize(n);
    was.assign(n, false);
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1) g1[i].push_back(j);
        }
    }
//    cout << endl << endl;
//    for(int i = 0; i < g1.sz; i++){
//        cout << i + 1 << " ";
//        for(int j = 0; j < g1[i].sz; j++){
//            cout << g1[i][j] + 1 << " ";
//        }
//        cout << endl;
//    }
    dfs(k - 1);
    cout << res1.sz << endl;

}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

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
set<int> st;

GraphAdjList g1;

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
    res.clear(); was.clear();
    int n, s;
    cin >> n >> s;
    g1.resize(n);
    was.assign(n, false);
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] != 0) g1[i].pb(j);
        }
    }
//    cout << endl;
//    for(int i = 0; i < g1.sz; i++){
//        cout << i << " ";
//        for(int j = 0; j < g1[i].sz; j++){
//            cout << g1[i][j] << " ";
//        }
//        cout << endl;
//    }

     dfs(s - 1);
     cout << res.sz << endl;
}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

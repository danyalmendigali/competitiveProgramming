#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<int, int>>;

GraphAdjList g1;
GraphPair g2;

vector<int> res1, res2, comp;
map<int, int> mp1, mp2;
set<int> st1, st2;
vector<bool> was;

void dfs(ll curr)
{
    was[curr] = true;
    res1.pb(curr + 1);
    comp.pb(curr + 1);
    for(int i : g1[curr]){
        if(!was[curr]) dfs(i);
    }
}

void searchConnectedComponents()
{
    for(int i = 0; i < g1.sz; i++) was[i] = false;
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]){
            comp.clear();
            dfs(i);
            cout << comp.sz << endl;
            for(int j = 0; j < comp.sz; j++){
                cout << comp[j] << " ";
            }
            cout << endl;
        }
    }
}

void solve()
{
    was.clear(); res1.clear(); comp.clear();
    int n; cin >> n;
    g1.resize(n);
    was.assign(n, false);
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
              g1[i].push_back(j);
              g1[j].push_back(i);
            }
        }
    }
    for(int i = 0; i < g1.sz; i++){
        cout << i << " ";
        for(int j = 0; j < g1[i].sz; j++){
            cout << g1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    searchConnectedComponents();


}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

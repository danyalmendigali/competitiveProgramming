#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
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
using GraphPairVertexList = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPairVertexList g2;

vector <int> res1, res2, res3;
map <int, int> mp1, mp2;
set <int> st1, st2;
vector<bool> used;
int n, m;

void dfs(ll cur)
{
    used[cur] = true;
    res1.pb(cur + 1);
    for(int i : g1[cur]){
        if(!used[i]) dfs(i);
    }
}
void solve()
{
    res1.clear(), res2.clear(), res3.clear();
    mp1.clear(); st1.clear();
    cin >> n >> m;
    g2.resize(m);
    g1.resize(n);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F].push_back(g2[i].S);
    }
    cout << endl << endl;
    for(int i = 0; i < m; i++){
        cout << i << " ";
        for(int j = 0; j < g1[i].sz; i++){
            cout << g1[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; )


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

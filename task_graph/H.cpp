#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <algorithm>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second
#define optimus_prime ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using GraphList = vector<pair<vertex, vertex>>;
using GraphMatrix = vector<Edge>;

GraphList g;
GraphMatrix g1;

void solve()
{
    int n, m; cin >> n >> m;
    g.resize(m);
    g1.resize(n, vector<vertex>(n));
    for(int i = 0; i < g1.sz; i++){
        for(int j = 0; j < g1.sz; j++){
            g1[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++){
        int to, from;
        cin >> to >> from;
        g1[to - 1][from - 1] = 1;
    }
    for(int i = 0; i < g1.sz; i++){
        for(int j = 0; j < g1.sz; j++){
            cout << g1[i][j] << " ";
        }
        cout << endl;
    }
}

signed main()
{
    optimus_prime;
    int t;
    //cin >> t;
    t = 1;
    while(t--)
        solve();


    return 0;
}

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
using Graph = vector<Edge>;

Graph g;

void solve()
{
    int a, b;
    cin >> a >> b;
    g.resize(a, vector<vertex>(a));
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            g[i][j] = 0;
        }
    }
    for(int i = 0; i < b; i++)
    {
        int from, to;
        cin >> from >> to;
        g[from][to] = 1;
        g[to][from] = 1;
    }

    for(int i = 0; i < g.sz; i++){
        for(int j = 0; j < g.sz; j++){
            cout << g[i][j] << " ";
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

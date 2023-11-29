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
    int n; cin >> n;
    int res = 0;
    g.resize(n, vector<vertex>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
            res += g[i][j];
        }
    }
    cout << res << endl;



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

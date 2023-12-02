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
using GraphMatrix = vector<Edge>;
using GrapgAdjacencyList = vector<vector<vertex>>;

GraphMatrix g;
GrapgAdjacencyList g1;

void solve()
{
    int n; cin >> n;
    g1.resize(n);
    int a;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a;
            if(a)
            g1[i].push_back(j);
        }
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

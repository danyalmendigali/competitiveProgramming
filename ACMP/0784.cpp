#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_bacK(a);
#define F first
#define S second
#define mendigaliTrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

vector<int> res1, res2, comp;
map<int, int> mp1, mp2;
set<int> st1, st2;
vector<bool> was;

ll findCommonAncestor(ll n, ll a, ll b) {
    while (a != b) {
        if (a > b) {
            a /= 2;
        } else {
            b /= 2;
        }
    }
    return a;
}

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    if(a == b){
        cout << a << endl;
        return;
    }
    ll result = findCommonAncestor(n, a, b);
    cout << result << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

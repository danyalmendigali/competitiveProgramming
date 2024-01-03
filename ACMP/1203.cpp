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

void solve()
{
    was.clear(); res1.clear(); comp.clear();
    int n; cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        int sizeGraph;
        cin >> sizeGraph;
        vector<int> dp(sizeGraph);
        for(int j = 0; j < sizeGraph; j++){
            cin >> dp[j];
            matrix[i][dp[j] - 1] = 1;
        }
    }
    cout << n << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

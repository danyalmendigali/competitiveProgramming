#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

set<pair<int, int>> st;

using vertex = int;
using Edge = vector<vertex>;
using Graph = vector<vector<vertex>>;

Graph g;

void solve()
{
    st.clear();
    int n, val; cin >> n;
    g.resize(n + 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> val;
            if(val) g[i].push_back(j + 1);
        }
    }
    for(int i = 0; i < n; i++){
        cout << g[i].sz << endl;
    }




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

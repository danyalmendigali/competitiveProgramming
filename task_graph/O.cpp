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

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

set<pair<int, int>> st;

using vertex = int;
using Edge = vector<vertex>;
using Graph = vector<pair<vertex, vertex>>;
using GraphAdjList = vector<vector<vertex>>;

Graph g;
GraphAdjList g2;

map<int, int> mp;
void solve()
{

    st.clear(); mp.clear();
    int n, m; cin >> n >> m;
    g.resize(m);
    g2.resize(n);
    for(int i = 0; i < m; i++){
        cin >> g[i].F >> g[i].S;
        g2[g[i].F - 1].push_back(g[i].S - 1);
    }
    pair<int, int> p[n + 9];
    pair<int, int> p2[n + 9];

    for(int i = 0; i < n; i++){
        p[i].F = i;
        p[i].S = g2[i].sz;
    }
    /*
    for(int i = 0; i < n; i++){
        cout << p[i].F << " " << p[i].S << endl;
    }
    */
    for(int i = 0; i < n; i++){
        for(int j = 0;  j < g2[i].sz; j++){
            mp[g2[i][j]]++;
        }
    }

    for(int i = 0; i < n; i++){
        for(auto j : mp){
            if(i == j.F){
                p2[i].F = i;
                p2[i].S = j.S;
                i++;
            }
            else{
                p2[i].F = i;
                p2[i].S = 0;
            }
        }
    }
    /*
    cout << endl << endl;
    for(int i = 0; i < n; i++){
        cout << p2[i].F << " " << p2[i].S << endl;
    }
    */
    //cout << endl << endl;
    for(int i = 0; i < n; i++){
        cout << p2[i].S << endl;
        cout << p[i].S << endl;
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

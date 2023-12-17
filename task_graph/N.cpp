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
using Graph = vector<pair<vertex, vertex>>;
using GraphAdjList = vector<vector<vertex>>;

GraphAdjList g;

map<int, int> mp;
void solve()
{
    st.clear(); mp.clear();
    int n, val; cin >> n;
    g.resize(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> val;
            if(val) g[i].push_back(j + 1);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < g[i].sz; j++){
            mp[g[i][j]]++;
        }
    }
    pair<int, int> p[n];
    cout << endl << endl;

    for(int i = 0; i <= n; i++){
        for(auto j : mp){
            if(i == j.F){
                p[i].F = i;
                p[i].S = j.S;
                i++;
            }
            else{
                p[i].F = i;
                p[i].S = 0;
            }
        }
    }
    /*
    for(int i = 1; i <= n; i++){
        cout << g[i].sz << endl;
        cout << p[i].S << endl;
    }
    */

    for(int i = 0; i < n; i++){
        cout << p[i + 1].S << endl;
        cout << g[i].sz << endl;
    }

    /*
    for(int i = 0; i < n; i++){
        cout << g[i].sz << endl;
        for(auto j : mp){
            if(j.F == i){
                if(j.S != 0){
                    cout << j.S << endl;
                }
                else{
                    cout << j.S << endl;
                }
            }
        }
    }
    */





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

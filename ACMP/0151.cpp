#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie();

using namespace std;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

vector<int> res1, res2, res3, comp;
vector<bool> was;
map<int, int> mp1;

void dfs(ll curr)
{
    was[curr] = true;
    comp.pb(curr + 1);
    for(int i : g1[curr]){
        if(!was[i]) dfs(i);
    }
}

int numComponent()
{
    int component = 0;
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]){
            comp.clear();
            dfs(i);
            component++;
        }
    }
    return component;
}


void solve()
{
    was.clear(); res1.clear(); comp.clear();
    int n, m; cin >> n >> m;
    g1.resize(n); g2.resize(m);
    was.assign(n, false);
    vector<vector<int>> matrix(n, vector<int>(n)), matrix2(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
              if(i == j){
                    matrix[i][j] = 1;
              }
              else{
                 matrix[i][j] = 0;
              }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix2[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        matrix[g2[i].F - 1][g2[i].S - 1] = 1;
        matrix[g2[i].S - 1][g2[i].F - 1] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                matrix2[i][j] = 1;
                matrix2[j][i] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix2[i][j] == 1){
                g1[i].push_back(j);
            }
        }
    }
//    for(int i = 0; i < g1.sz; i++){
//        cout << i + 1 << " ";
//        for(int j = 0; j < g1[i].sz; j++){
//            cout << g1[i][j] + 1 << " ";
//        }
//        cout << endl;
//    }

    int component = numComponent();
//    cout << component << endl;
    if(component == 2 || component == 1){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;


}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

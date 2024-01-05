#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

using vertex = int;
using Edge = vector <vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

set<int> st1, st2;

void solve()
{
    st1.clear(); st2.clear();
    int n; cin >> n;
    g1.resize(n);
    vector<int> res, ans, ans2;
    for(int i = 0; i < n; i++){
        ans.pb(i + 1);
    }
    cout << endl;
    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                g1[i].push_back(j);
            }
        }
    }
    cout << endl << endl;
    for(int i = 0; i < g1.sz; i++){
        cout << i << " ";
        for(int j = 0; j < g1[i].sz; j++){
            cout << g1[i][j] + 1 << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < g1.sz; i++){
        if(g1[i].sz == 0){
            res.pb(i + 1);
        }
        for(int j = 0; j < g1[i].sz; j++){
            st1.insert(g1[i][j] + 1);
        }
    }
    for(auto i : st1){
        ans.pb(i);
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.sz; i++){
        if(ans[i] == ans[i + 1]){
            i += 2;
        }
        else{
            ans2.push_back(ans[i]);
        }
    }
    for(int i = 0; i < ans2.sz; i++){
        cout << ans2[i] << " ";
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

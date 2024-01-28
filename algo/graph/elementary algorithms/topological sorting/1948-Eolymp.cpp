#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

vector<bool> was;
vector<int> res1, res2;

vector<vector<int>> g1;
vector<pair<int, int>> g2;

vector<int> khan(vector<vector<int>>& graph, int graph_sz, vector<pair<int, int>> graph_pair)
{
    vector<int> other(graph_sz, 0);
    for(int i = 0; i < graph_sz; i++){
        other[graph_pair[i].S - 1]++;
    }
    queue<int> q;
    for(int i = 0; i < graph_sz; i++){
        if(other[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int numFront = q.front(); q.pop();
        res1.pb(numFront + 1);
        for(int i : graph[numFront]){
            if(--other[i] == 0){
                q.push(i);
            }
        }
    }
    return res1;
}


void solve()
{
    g1.clear(); g2.clear(); res1.clear();
    int n, m; cin >> n >> m;
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }
    vector<int> ans = khan(g1, n, g2);
    if(ans.sz == n){
        for(int i = 0; i < ans.sz; i++){
            cout << ans[i] << " ";
        }
    }
    else{
        cout << -1 << endl;
        return;
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

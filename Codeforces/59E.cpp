#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

vector<bool> was;
vector<int> res1, res2;
vector<pair<int, int>> g1;
vector<vector<int>> g2;

vector<int> bfs(vector<vector<int>>& graph, int startPoint, int endPoint)
{
       was.clear(); res1.clear();
       int size_graph = graph.sz;
       was.assign(size_graph, false);
       queue<int> q;
       vector<int> d(size_graph), p(size_graph);
       q.push(startPoint);
       was[startPoint] = true;
       p[startPoint] = -1;
       while(!q.empty()){
              int numFront = q.front();
              q.pop();
              res1.pb(numFront);
              for(int i = 0; i < graph[numFront].sz; i++){
                     int to = graph[numFront][i];
                     if(!was[to]){
                            was[to] = true;
                            q.push(to);
                            d[to] = numFront + 1;
                            p[to] = numFront;
                     }
              }
       }
       vector<int> path;
       for(int i = endPoint; i != -1; i = p[i]){
              path.pb(i + 1);
       }
       reverse(all(path));


       return path;
}

void solve()
{
       was.clear(); res1.clear();
       int n, m, k; cin >> n >> m >> k;
       g1.resize(n); g2.resize(m);
       for(int i = 0; i < n; i++){
              cin >> g1[i].F >> g1[i].S;
              g2[g1[i].F - 1].push_back(g1[i].S - 1);
              g2[g1[i].S - 1].push_back(g1[i].F - 1);
       }
       int a, b, c;
       vector<vector<int>> cnt(k, vector<int>(3));
       for(int i = 0; i < k; i++){
              cin >> a >> b >> c;
              cnt[i][0] = a;
              cnt[i][1] = b;
              cnt[i][2] = c;
       }
       int startPoint = 1, endPoint = n;
       vector<int> res = bfs(g2, startPoint - 1, endPoint - 1);
       for(int i = 0; i < res.sz; i++){
              cout << res[i] << " ";
       }





}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}

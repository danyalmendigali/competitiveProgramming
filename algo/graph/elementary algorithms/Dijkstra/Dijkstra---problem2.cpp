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

//

using namespace std;

#define ll long long
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

const ll MAXN = 1e3 + 5;
const ll INF = 1e18;

ll d[MAXN], p[MAXN];
ll mtx[MAXN][MAXN];
vector<int> g[MAXN];
vector<int> res;
vector<bool> was;
vector<vector<int>> g1;
vector<pair<int, int>> g2;
set<pair<int, int>> st;

vector<int> bfs(vector<vector<int>> graph, int startPoint, int endPoint)
{
       was.clear();
       int sz_g = graph.sz;
       was.assign(sz_g, false);
       queue<int> q;
       vector<int> d(sz_g), p(sz_g);
       q.push(startPoint);
       was[startPoint] = true;
       p[startPoint] = -1;
       while(!q.empty()){
              int numFront = q.front();
              q.pop();
              res.pb(numFront);
              for(int i : graph[numFront]){
                     int to = graph[numFront][i];
                     if(!was[to]){
                            q.push(to);
                            was[to] = true;
                            d[to] = d[numFront] + 1;
                            p[to] = numFront;
                     }
              }
       }

       if(was[endPoint]){
             vector<int> path;
             for(int i = endPoint; i != -1; i = p[i]){
                     path.pb(i);
             }
             reverse(all(path));

             return path;
       }
       else{
              return {};
       }
}

void solve()
{
       int n; cin >> n;
       g1.resize(n);
       vector<vector<int>> mtx(n, vector<int>(n));
       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     cin >> mtx[i][j];
                     if(mtx[i][j] == 1){
                            g1[i].push_back(j);
                            g1[j].push_back(i);
                     }
              }
       }


       int startPoint, endPoint;
       cin >> startPoint >> endPoint;
       vector<int> res = bfs(g1, startPoint, endPoint);
       cout << res.sz - 1 << endl;





}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}

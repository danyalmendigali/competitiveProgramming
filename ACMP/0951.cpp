#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define kostyl ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const ll N = 1e3 + 1;
const ll mod = 1e9 + 7;
const ll inf = 1e9 + 9;


short dx[] = {-1, 1, 0, 0};
short dy[] = {0, 0, 1, -1};

void solve()
{
       short n, m; cin >> n >> m;
       vector<vector<short>> a(n, vector<short>(m, -1));

       short y, x;
       short k; cin >> k;

       queue<pair<short, short>> q;
       for(int i = 0; i < k; i++){
              cin >> y >> x;
              y--; x--;
              q.push({y, x});
              a[y][x] = 0;
       }

       short mx = 0;

       while(!q.empty()){
              short y = q.front().F;
              short x = q.front().S;
              q.pop();

              for(int i = 0; i < 4; i++){
                     short ny = y + dy[i];
                     short nx = x + dx[i];

                     if(ny >= 0 && ny < n && nx >= 0 && nx < m && a[ny][nx] == -1){
                            a[ny][nx] = a[y][x] + 1;
                            mx = max(mx, a[ny][nx]);
                            q.push({ny, nx});

                     }
              }
       }

       cout << mx << endl;




}


signed main()
{
       kostyl;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}

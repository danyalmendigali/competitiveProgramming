#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

void solve()
{
     int n, m, k;
     cin >> n >> m >> k;
     string r;
     cin >> r;

     vector<bool> visited(n + 2, false);
     queue<pii> q;

     q.push({0, 0});
     visited[0] = true;
     bool canReach = false;
     while (!canReach && !q.empty()){
         pair<int, int> c = q.front();
         q.pop();
         int pos = c.F;
         int steps = c.S;

         if (pos == 0 || r[pos - 1] == 'L'){
            for (int j = 1; j <= m; j++){
                int nextPos = pos + j;

                if (nextPos == n + 1){
                    canReach = true;
                    break;
                }
                if(nextPos <= n && r[nextPos - 1] != 'C' && !visited[nextPos]){
                    visited[nextPos] = true;
                    q.push({nextPos, steps});
                }
            }
        }

        if(pos > 0 && pos <= n && r[pos - 1] == 'W' && steps < k){
            int nextPos = pos + 1;

            if (nextPos == n + 1){
                canReach = true;
                break;
            }

            if (nextPos <= n && r[nextPos - 1] != 'C' && !visited[nextPos]){
                visited[nextPos] = true;
                q.push({nextPos, steps + 1});
            }
        }
    }

     if(canReach){
         cout << "YES" << endl;
         return;
     }

     else{
         cout << "NO" << endl;
         return;
     }
}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--){
              solve();
       }

       return 0;
}

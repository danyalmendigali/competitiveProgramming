#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()


const ll INF = 1e9 + 9;

void solve()
{
       int n; cin >> n;
       vector<vector<int>> a(n, vector<int>(n));
       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     cin >> a[i][j];
              }
       }



       vector<vector<int>> d((1 << n), vector<int>(n, INF));
       d[0][0] = 0;
       for(int mask = 0; mask < (1 << n); mask++){
              for(int i = 0; i < n; i++){
                     if(d[mask][i] == INF){
                            continue;
                     }
                     for(int j = 0; j < n; j++){
                            if(!(mask & (1 << j)) && a[i][j] != 0){
                                   d[mask ^ (1 << j)][j] = min(d[mask ^ (1 << j)][j], d[mask][i] + a[i][j]);
                            }
                     }
              }
       }

       if(d[(1 << n) - 1][0] == INF){
              cout << "No path" << endl;
              return;
       }
       else{
              cout << d[(1 << n) - 1][0] << endl;
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

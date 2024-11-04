
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;


void solve()
{
       int n; cin >> n;
       vector<vector<ll>> a(n, vector<ll>(n));

       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     cin >> a[i][j];
              }
       }

       vector<vector<ll>> b(n + 4, vector<ll>(n + 4, 0));

       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     b[i + 2][j + 2] = a[i][j];
              }
       }

       ll mx = -1e9;
       for(int i = 2; i < n + 2; i++){
              for(int j = 2; j < n + 2; j++){
                   ll cur = b[i][j];
                   mx = max(mx, b[i - 1][j] + cur + b[i + 1][j]);
                   mx = max(mx, b[i][j - 1] + cur + b[i][j + 1]);
                   mx = max(mx, b[i - 1][j] + cur + b[i][j + 1]);
                   mx = max(mx, b[i - 1][j] + cur + b[i][j - 1]);
                   mx = max(mx, b[i][j - 1] + cur + b[i + 1][j]);
                   mx = max(mx, b[i][j + 1] + cur + b[i + 1][j]);
                   mx = max(mx, b[i][j + 1] + cur + b[i][j + 2]);
                   mx = max(mx, b[i][j - 1] + cur + b[i][j - 2]);
                   mx = max(mx, b[i + 1][j] + cur + b[i + 2][j]);
                   mx = max(mx, b[i - 1][j] + cur + b[i - 2][j]);
              }
       }

       cout << mx << endl;
}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <cmath>

#define ll long long
#define sz size()
#define S second
#define F first
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll N = 101;N
const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;

void solve() {
     int n, m, k, H;
     cin >> n >> m >> k >> H;

     vector<int> dp(n);
     for (int i = 0; i < n; i++) {
         cin >> dp[i];
     }
     int res = 0;
     for (int i = 0; i < n; i++) {
         for (int j = 1; j <= m; j++) {
             if (abs(dp[i] - j * k) <= H) {
                 res++;
                 break;
             }
          }
      }

      cout << res << endl;

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}

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

const int N = 12;
long long d[N + 1][1 << N];

bool can(int mask, int new_mask, int n) {
    for (int i = 0; i < n; i++) {
        if ((mask & (1 << i)) && (new_mask & (1 << i))) return false;
    }
    return true;
}


void solve()
{
       int n, m; cin >> n >> m;
       d[0][0] = 1;
       for(int i = 0; i < m; i++){
              for(int mask = 0; mask < (1 << n); mask++){
                     for(int new_mask = 0; new_mask < (1 << n); new_mask++){
                            if(can(mask, new_mask, n)){
                                   d[i + 1][new_mask] += d[i][mask];
                            }
                     }
              }
              cout << d[m][0] << endl;
       }


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

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


const ll N = 1e6 + 5;
const ll INF = 1e18;


void solve() {
      int x, y, k;
      cin >> x >> y >> k;

      set<pair<int, int>> st;

      if (k % 2 == 1) {
          st.insert({x, y});
      }

      for (int i = 1; i <= k / 2; i++) {
          st.insert({x - i, y - i});
          st.insert({x + i, y + i});
      }

      for (const auto& p : st) {
          cout << p.F << " " << p.S << endl;
      }
}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}

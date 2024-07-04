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
       int n, m; cin >> n >> m;
       vector<int> a(m);
       for(int i = 0; i < m; i++){
              cin >> a[i];
       }
       vector<int> b;
       b.pb(a[0] - 1);
       for(int i = 0; i < m - 1; i++){
              b.pb(a[i + 1] - a[i] - 1);
       }
       b.pb(n - a[a.sz - 1]);

       int left = b[0], right = b[b.sz - 1];
       sort(all(b));
       int res = 0;
       bool ok = false;
       reverse(all(b));
       cout << right << endl;
       for(int i = 0; i < b.sz; i++){
              cout << b[i] << " ";
       }
       cout << endl << endl;

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

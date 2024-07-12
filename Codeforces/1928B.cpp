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
       int n, res2 = 0, mx = 0; cin >> n;
       vector<int> a(n);
       set<int> st;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              st.insert(a[i]);
       }

       vector<int> res;
       for(auto i : st){
              res.pb(i + n);
       }
       sort(all(res));
       reverse(all(res));

       for(auto i : st){
              res2++;
              while(res.sz && res[res.sz - 1] <= i){
                     res.erase(res.end() - 1);
                     res2--;
              }
              mx = max(mx, res2);
       }

       cout << mx << endl;
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

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
const ll INF = 1e9;

void solve()
{
       int n; cin >> n;
       int res = (n * (n - 1)) / 2;
       vector<int> a(res);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }
       sort(all(a));


       int id = 0, pls = n - 1;
       vector<int> res2;

       while(pls > 0){
              res2.pb(a[id]);
              id += pls;
              pls--;
       }

       res2.pb(INF);

       for(int i = 0; i < res2.sz; i++){
              cout << res2[i] << " ";
       }
       cout << endl;


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
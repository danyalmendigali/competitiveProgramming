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


void solve()
{
       int n, x, y; cin >> n >> x >> y;
       int a = y - x;

       int cop_a = a;

       for(int i = 1; i <= a; i++){
              if(a % i == 0 && a / i + 1 <= n){
                     cop_a = i;
                     break;
              }
       }

       vector<int> res;
       int s = y - (n - 1) * cop_a;
       while(s < 1){
              s += cop_a;
       }

       for(int i = 0; i < n; i++){
              res.pb(s + i * cop_a);
       }

       for(int i = 0; i < res.sz; i++){
              cout << res[i] << " ";
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

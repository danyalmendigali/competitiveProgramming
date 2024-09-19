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
       int n, m; cin >> n >> m;
       vector<int> a(n), b(m);
       for(int i = 0; i < n; i++){
              cin >> a[i];
              a[i]--;
       }
       for(int i = 0; i < m; i++){
              cin >> b[i];
       }

       sort(all(a));
       reverse(all(a));

       ll res = 0, ind = 0;
       for(int i = 0; i < n; i++){
              if(ind < a[i]){
                     res += b[ind];

                     ind++;
              }
              else{
                     res += b[a[i]];
              }
       }

       cout << res << endl;

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

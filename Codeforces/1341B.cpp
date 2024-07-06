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
       int n, k; cin >> n >> k;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<int> res(n, 0);
       for(int i = 0; i < n - 1; i++){
              if(a[i] > a[i - 1] && a[i] > a[i + 1]){
                     res[i] = 1;
              }
       }

       int cnt = 0;
       for(int i = 1; i < k - 1; i++){
              cnt += res[i];
       }
       int mx = cnt, l = 1;
       for(int i = k; i < n; i++){
              cnt += res[i - 1] - res[i - k + 1];
              if(cnt > mx){
                     mx = cnt;
                     l = i - k + 2;
              }
       }

       cout << mx + 1 << " " << l << endl;


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

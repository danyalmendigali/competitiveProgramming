#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

int findClosest(const vector<ll>& vec, ll target){
    ll closest = vec[0];
    ll min_diff = abs(vec[0] - target);

    for (const int& num : vec) {
        ll current_diff = std::abs(num - target);
        if (current_diff < min_diff) {
            min_diff = current_diff;
            closest = num;
        }
    }

    return closest;
}

void solve()
{
       ll n; cin >> n;
       vector<ll> a(n);
       vector<ll> b(n + 1);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       // 5
       //5 7 8 6 4
       //3 5 10 12 13 11
       ll res = 0;
       for(int i = 0; i < b.sz; i++){
              cin >> b[i];
       }
       int g = b[b.sz - 1];
       for(int i = 0; i < a.sz; i++){
              //cout << abs(a[i] - b[i]) << endl;
              res += abs(a[i] - b[i]);
       }
       for(int i = 0; i < a.sz; i++){
              if((a[i] > g && b[i] < g) || (a[i] < g && b[i] > g)){
                      cout << res + 1 << endl;
                      return;
              }
       }
       for(int i = 0; i < b.sz - 1; i++){
              if(b[i] == g){
                     cout << res + 1 << endl;
                     return;
              }
       }


       b.pop_back();

       ll r = findClosest(a, g);
       ll r2 = findClosest(b, g);
       ll e2 = abs(r - g);
       ll e3 = abs(r2 - g);
       res++;

       res += min(e2, e3);
       cout << res << endl;



}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}

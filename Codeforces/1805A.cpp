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

const int N = 1e9 + 9;

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       for(int i = 0; i <= (1 << 8); i++){
              vector<int> b(n);
              for(int j = 0; j < n; j++){
                     b[j] = a[j] ^ i;
              }
              ll ans = b[0];

              for(int j = 1; j < b.sz; j++){
                     ans ^= b[j];
              }

              if(ans == 0){
                     cout << i << endl;
                     return;
              }
       }

       cout << -1 << endl;




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

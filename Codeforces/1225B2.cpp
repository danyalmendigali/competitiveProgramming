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
       int n, k, d;
       cin >> n >> k >> d;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       ll l = 0, r = d - 1;
       ll mn = 1e9;
       map<ll, int> freq;
       int dist = 0;

       for(int i = l; i <= r; i++){
              if(freq[a[i]] == 0) dist++;
              freq[a[i]]++;
       }

       mn = min(mn, (ll)dist);

       while(r < n - 1){
              if(freq[a[l]] == 1) dist--;
              freq[a[l]]--;
              l++; r++;

              if(freq[a[r]] == 0) dist++;
              freq[a[r]]++;

              mn = min(mn, (ll)dist);
       }


       cout << mn << endl;


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

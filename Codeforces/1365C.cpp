#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
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

void solve()
{
       int n; cin >> n;
       vector<int> a(n), b(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < n; i++){
              cin >> b[i];
       }

       map<int, int> mp;

       for(int i = 0; i < n; i++){
              mp[a[i]] = i;
       }
       vector<int> cnt(a.sz, 0);
       for(int i = 0; i < n; i++){
              int pos = mp[b[i]];
              int shift = (i - pos + n) % n;
              cnt[shift]++;
       }
       int mx = 0;
       for(int i = 0; i < cnt.sz; i++){
              mx = max(mx, cnt[i]);
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

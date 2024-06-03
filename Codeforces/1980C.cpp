#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

bool good(vector<int>& a, vector<int>& b, vector<int>& d)
{
       unordered_map<int, int> cnt;
       for(int i : d){
              cnt[i]++;
       }
       for(int i = 0; i < a.sz; i++){
              if(a[i] != b[i]){
                     if(cnt[b[i]] > 0){
                            cnt[b[i]]--;
                     }
                     else{
                            return false;
                     }
              }
       }
       return true;
}


void solve()
{
       int n; cin >> n;
       set<int> st, st2;
       vector<int> a(n), b(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < n; i++){
              cin >> b[i];
       }
       int m; cin >> m;
       vector<int> c(m);
       for(int i = 0; i < m; i++){
              cin >> c[i];
       }

       bool ok = good(a, b, c);
       if(ok){
              cout << "YES" << endl;
              return;
       }
       cout << "NO" << endl;



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

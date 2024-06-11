#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <cmath>
#include <set>
#include <stack>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


bool ok(vector<int> a, int k)
{
       set<int> st;
       bool ok2 = false;
       for(int i = 0; i < a.sz; i++){
              st.insert(a[i]);
       }
       if(st.sz >= k){
              ok2 = true;
       }
       return ok2;
}

const ll N = 5 * 1e5;

void solve()
{
       set<int> st;
       int m, n; cin >> m >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<int> cnt(m + 1, 0);
       string ans = "";
       map<int, int> mp;
       for(int i = 0; i < a.sz; i++){
              st.insert(a[i]);
              cnt[a[i]]++;
              if(st.sz == m){
                     ans += '1';
                     for(int j = 1; j <= m; j++){
                            cnt[j]--;
                     }
                     st.clear();
                     for(int j = 1; j <= m; j++){
                            if(cnt[j] != 0){
                                   st.insert(j);
                            }
                     }
              }
              else{
                     ans += '0';
              }

       }
       cout << ans << endl;



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

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_set>
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
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       unordered_set<int> st;
       vector<int> pref(n + 1, 0);
       for(int i = 0; i < n; i++){
              pref[i + 1] = pref[i] + a[i];
       }

       for(int l = 0; l < n; l++){
              for(int r = l + 1; r < n; r++){
                     int sum = pref[r + 1] - pref[l];
                     if(sum <= n){
                            st.insert(sum);
                     }
              }
       }

       int cnt = 0;
       for(int i = 0; i < n; i++){
              if(st.find(a[i]) != st.end()){
                     cnt++;
              }
       }

       cout << cnt << endl;




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

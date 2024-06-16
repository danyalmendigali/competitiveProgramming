#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve(){

       int n, k; cin >> n >> k;
       string s; cin >> s;
       vector<int> pos;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '1'){
                     pos.pb(i);
              }
       }
       if(pos.sz == 0){
              int ans = 0;
              for(int i = 0; i < s.sz; i += (k + 1)){
                     ans++;
              }
              cout << ans << endl;
              return;
       }

       int ans = 0;
       if(pos.empty()){
              for(int i = 0; i < s.sz; i += (k + 1)){
                     ans++;
              }
       }
       else{
              int first = pos[0];
              for(int i = first - k - 1; i >= 0; i -= (k + 1)){
                     ans++;
              }
              for(int i = 1; i < pos.sz; i++){
                     int g = pos[i] - pos[i - 1] - 1;
                     if(g > 2 * k){
                            ans += (g - k) / (k + 1);
                     }
              }

              int l = pos[pos.sz - 1];
              for(int i = l + k + 1; i < s.sz; i += (k + 1)){
                     ans++;
              }
       }
       cout << ans << endl;
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

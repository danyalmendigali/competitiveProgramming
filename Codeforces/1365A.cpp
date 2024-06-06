#include <iostream>
#include <vector>
#include <string>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int reverseVector(const vector<int>& a, const vector<int>& b)
{
       int ans = 0;
       for(int i = 0; i < min(a.sz, b.sz); i++){
              if(a[i] == 0 && a[i] == b[i]){
                     ans++;
              }
       }
       return ans;
}

void solve()
{
       int n, m; cin >> n >> m;
       vector<vector<int>> a(n, vector<int>(m));
       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     cin >> a[i][j];
              }
       }
       int res = 0;
       vector<int> cnt, cnt2;
       for(int i = 0; i < n; i++){
              int ind = i;
              res = 0;
              for(int j = 0; j < m; j++){
                     if(a[ind][j] == 1){
                            res++;
                     }
              }
              cnt.pb(res);
       }

       for(int i = 0; i < m; i++){
              int ind2 = i;
              res = 0;
              for(int j = 0; j < n; j++){
                     if(a[j][ind2] == 1){
                            res++;
                     }
              }
              cnt2.pb(res);
       }
       int ans = count(all(cnt), 0);
       int ans2 = count(all(cnt2), 0);
       if(min(ans, ans2) % 2 == 0){
              cout << "Vivek" << endl;
              return;
       }
       cout << "Ashish" << endl;


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

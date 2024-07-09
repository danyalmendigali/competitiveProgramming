#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <unordered_map>
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
       unordered_map<int, int> freq;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              freq[a[i]]++;
       }

       int mx = -1, l = -1, r = -1;
       int curr = 0, s = 0;

       for(int i = 0; i < n; i++){
              if(freq[a[i]] >= k){
                     curr++;
                     if(curr > mx){
                            mx = curr;
                            l = s;
                            r = i;
                     }
              }
              else{
                     curr = 0;
                     s = i + 1;
              }
       }

       if(mx == -1){
              cout << -1 << endl;
              return;
       }
       else{
              cout << a[l] << " " << a[r] << endl;
              return;
       }






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

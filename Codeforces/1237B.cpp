#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
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
       vector<int> a(n), b(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < n; i++){
              cin >> b[i];
       }
       map<int, int> mp;
       for(int i = 0; i < n; i++){
              mp[b[i]] = i;
       }
       int cnt = 0, mx = -1;
       for(int i = 0; i < n; i++){
              if(mp[a[i]] > mx){
                     mx = mp[a[i]];
              }
              else{
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
       //cin >> t;
       while(t--) solve();


       return 0;
}

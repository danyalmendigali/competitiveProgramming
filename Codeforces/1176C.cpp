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
       int n; cin >> n;
       vector<int> a(n);
       vector<int> cnt(6, 0);
       vector<int> num = {4, 8, 15, 16, 23, 42};

       for(int i = 0; i < n; i++){
              cin >> a[i];
              for(int j = 0; j < num.sz; j++){
                     if(a[i] == num[j]){
                            if(j == 0 || cnt[j - 1] > cnt[j]){
                                   cnt[j]++;
                            }
                            break;
                     }
              }
       }

       int res = a.sz - (cnt[5] * 6);
       cout << res << endl;



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

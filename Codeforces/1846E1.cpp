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
       bool ok = false;
       for(int i = 2; i < n + 1; i++){
              if(i * i > n){
                     break;
              }
              ll cnt = 0, ans = 1;
              while(cnt < n){
                     cnt += ans;
                     ans *= i;
              }
              if(cnt == n) ok = true;
       }
       if(ok){
              cout << "YES" << endl;
              return;
       }
       else{
              cout << "NO" << endl;
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

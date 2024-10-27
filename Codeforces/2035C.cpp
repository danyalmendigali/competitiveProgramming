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


const ll N = 1e6 + 5;
const ll INF = 1e18;



void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       int ind = 0;
       int mx = -1;

       for(int i = 2; i <= n; i += 2){
              a[ind++] = i;
       }
       for(int i = 1; i <= n; i += 2){
              a[ind++] = i;
       }



       int k = 0;
       for(int i = 0; i < n; i++){
              if(i % 2 == 0){
                     k &= a[i];
                     mx = max(mx, k);
              }
              else{
                     k |= a[i];
                     mx = max(mx, k);
              }
       }

       cout << mx << endl;
       for(int i = 0; i < a.sz; i++){
              cout << a[i] << " ";
       }
       cout << endl;


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

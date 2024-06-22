#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
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
#define Mendigali_Daniyal ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

void mendigali()
{
       int n, x; cin >> n >> x;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       int tot_sum = 0;
       for(int i = 0; i < a.sz; i++){
              tot_sum += a[i];
       }

       if(tot_sum % x != 0){
              cout << n << endl;
              return;
       }

       int l = 0, r = 0;
       for(int i = 0; i < n; i++){
              if(a[i] % x != 0){
                     l = i + 1;
                     break;
              }
       }

       for(int i = n - 1; i >= 0; i--){
              if(a[i] % x != 0){
                     r = n - i;
                     break;
              }
       }

       if(l == 0 && r == 0) cout << -1 << endl;
       else{
              cout << n - min(l, r) << endl;
              return;
       }

}

signed main()
{
       Mendigali_Daniyal;
       int t;
       t = 1;
       cin >> t;
       while(t--) mendigali();



       return 0;
}

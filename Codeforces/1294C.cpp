#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
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

set<int> st1, st2;

void solve()
{
       st1.clear();
       int n; cin >> n;
       int copy_N = n;
       int res = 0;
       vector<int> res_vec;
       for(int i = 2; i * i <= n; i++){
              if(n % i == 0){
                     res++;
                     n /= i;
                     res_vec.pb(i);
              }
              if(res == 2){
                     res_vec.pb(n);
                     break;
              }
       }
       for(int i : res_vec){
              st1.insert(i);
       }
       if(res < 2){
              cout << "NO" << endl;
              return;
       }
       if(st1.sz != 3){
              cout << "NO" << endl;
              return;
       }
       else{
              cout << "YES" << endl;
              cout << res_vec[0] << " " << res_vec[1] << " " << res_vec[2] << endl;
              return;
       }

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

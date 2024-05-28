#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

const int N = 1e3 + 1;
map<int, int> mp1, mp2;

vector<int> erat(int f)
{
       vector<bool> ok(f + 1, true);
       ok[0] = ok[1] = false;
       for(int i = 2; i <= f; i++){
              if(ok[i] && i * 1ll * i <= f){
                     for(int j = i * i; j <= f; j += i){
                            ok[j] = false;
                     }
              }
       }
       vector<int> res;
       for(int i = 2; i <= f; i++){
              if(ok[i]){
                     res.pb(i);
              }
       }
       return res;
}

void solve()
{
       mp1.clear();
       int n, k; cin >> n >> k;
       vector<int> vec = erat(n);
       vector<int> ans;
       for(int i = 0; i < vec.sz - 1; i++){
              ans.pb(vec[i] + vec[i + 1] + 1);
       }

       for(int i = 0; i < vec.sz; i++){
              mp1[vec[i]]++;
       }
       for(int i = 0; i < ans.sz; i++){
              mp1[ans[i]]++;
       }
       int res = 0;
       for(pair<int, int> i : mp1){
              //cout << i.F << " " << i.S << endl;
              if(i.S > 1){
                     res++;
              }
       }

       if(res >= k){
              cout << "YES" << endl;
              return;
       }
       cout << "NO" << endl;


}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}

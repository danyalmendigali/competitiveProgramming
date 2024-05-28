#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

map<int, int> mp1;

map<int, int> erat(const vector<int>& a)
{
       mp1.clear();
       for(int i : a){
              mp1[i]++;
       }
       int mx = 0;
       for(int i : a){
              mx = max(i, mx);
       }
       int size_a = mx;
       vector<bool> ok(size_a + 1, true);
       ok[0] = ok[1] = false;
       for(int i = 2; i <= size_a; i++){
               if(ok[i] && i * 1ll * i <= size_a){
                     for(int j = i * i; j <= size_a; j += i){
                            ok[j] = false;
                     }
               }
       }
       vector<int> res;
       for(int i = 2; i <= size_a; i++){
              if(ok[i]){
                     mp1[i]++;
              }
       }

       return mp1;

}


void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<int> vec;
       map<int, int> res = erat(a);
       for(pair<int, int> i : res){
              if(i.S >= 2){
                     vec.pb(i.F);
              }
       }
       for(int i = 0; i < vec.sz; i++){
              cout << vec[i] << " ";
       }
       cout << endl << endl;



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

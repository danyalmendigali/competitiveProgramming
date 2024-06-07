#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
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

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       set<tuple<int, int, int>> st;
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     if(i != j){
                            st.insert(make_tuple(i, j, a[i] + a[j]));
                     }
              }
       }

       map<int, int> mp;
       for(const auto& elem : st){
              int i, j, sum;

              mp[sum]++;
       }
       int mx = 0;
       for(pair<int, int> i : mp){
              mx = max(mx, i.S / 2);
       }
       cout << mx << endl;




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

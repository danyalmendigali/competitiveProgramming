#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int n, k; cin >> n >> k;
       vector<int> a(n);
       set<int> st;
       map<int, int> mp;
       int sum = 0;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              st.insert(a[i]);
       }
       for(int i = 0; i < k; i++){
              mp[a[i]]++;
       }
       for(auto i : mp){
              sum += i.S;
       }


       if(st.sz > k){
              cout << -1 << endl;
              return;
       }

       cout << n * k << endl;
       for(int i = 0; i < a.sz; i++){
              for(int j : st){
                            cout << j << " ";
              }
              for(int j = 0; j < k - st.sz; j++){
                            cout << 1 << " ";
              }
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

#include <iostream>
#include <vector>
#include <string>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       map<ll, int> mp;
       ll sum1 = 0, sum2 = 0;
       for(int i = 0; i < n; i++){
              if(i % 2 == 0) sum1 += a[i];
              else sum2 += a[i];
              if(sum1 == sum2){
                     cout << "YES" << endl;
                     return;
              }
              if(mp[sum1 - sum2] >= 1){
                     cout << "YES" << endl;
                     return;
              }
              mp[sum1 - sum2]++;
       }
       cout << "NO" << endl;
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

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int goodNum(vector<int> a, int sum)
{
       int l = 0, r = a.sz - 1;
       int res = 0;
       while(l < r){
              if(a[l] + a[r] == sum){
                     res++;
                     r--;
                     l++;
              }
              if(a[l] + a[r] > sum) r--;
              if(a[l] + a[r] < sum) l++;
       }

       return res;
}

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));
       int ans = 0;
       for(int i = 2; i <= 100; i++){
              ans = max(ans, goodNum(a, i));
       }

       cout << ans << endl;




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

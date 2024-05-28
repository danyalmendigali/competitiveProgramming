#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <numeric>
#include <cmath>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

set<char> st1;
map<char, int> mp1, mp2;

void solve()
{
       int t; cin >> t;
       while(t--)
       {
              int n; cin >> n;
              vector<int> a(n);
              for(int i = 0; i < n; i++){
                     cin >> a[i];
              }
              long long res = 0;
              for(int j = 0; j < n - 3; ++j){
                     int count_r = 0;
                     if(a[j] != a[j]) count_r++;
                     if(a[j + 1] != a[j + 2]) count_r++;
                     if(a[j + 2] != a[j + 3]) count_r++;
                     if(count_r == 1){
                            res++;
                     }
              }
              cout << res << endl;
       }


}

signed main()
{
       cin.tie(0);
       cout.tie(0);
       ios::sync_with_stdio(false);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}

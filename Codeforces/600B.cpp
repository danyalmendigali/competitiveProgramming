#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <queue>
#include <cmath>
#include <iomanip>
#include <chrono>
#include <random>
#include <algorithm>

using namespace std;
using namespace::chrono;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

map<int, int> mp1;

void solve()
{
       mp1.clear();
       int n, m; cin >> n >> m;
       vector<int> a(n), b(m);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));
       for(int i = 0; i < m; i++){
              cin >> b[i];
              int l = 1, r = n, g = 0;
              while(l <= r){
                     int mid = (l + r) / 2;
                     if(a[mid] > b[i]) r = mid - 1;
                     else {
                            l = mid + 1;
                            g = mid;
                     }
              }
              cout << g << " ";
       }






}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();



       return 0;
}

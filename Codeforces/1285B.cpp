#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <numeric>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define ins() insert()
#define ers(a) erase();
#define fori(i, n) for(int i = 0; i < n; i++)
#define inf 1e18


void solve()
{
    ll n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
       cin >> a[i];
    }
    ll s = 0;
    for(int i = 0; i < n; i++){
       s += a[i];
       if(s <= 0){
              cout << "NO" << endl;
              return;
       }
    }
    s = 0;
    for(int i = 0; i < n; i++){
       s += a[n - 1 - i];
       if(s <= 0){
              cout << "NO" << endl;
              return;
       }
    }
    cout << "YES" << endl;



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

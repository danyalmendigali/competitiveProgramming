#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()


const ll INF = 1e10;


void solve()
{
       ll n; cin >> n;
       vector<ll> a(n);
       ll mn = INF;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              mn = min(mn, a[i]);
       }

       ll mn2 = INF;
       for(int i = 0; i < n; i++){
             a[i] = mn & a[i];
             mn = min(mn, a[i]);
       }

       cout << mn << endl;


}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <numeric>
#include <queue>
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
       int n, m, sum = 0; cin >> n >> m;
       vector<pair<pair<int, int>, int>> a(m);
       for(int i = 0; i < m; i++){
              cin >> a[i].F.F >> a[i].F.S;
              a[i].S = i;
       }
       sort(all(a));
       cout << endl << endl;
       for(int i = 0; i < n * 2; i++){
              sum += a[i].F.S;
       }
       cout << endl;
       cout << sum << endl;


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

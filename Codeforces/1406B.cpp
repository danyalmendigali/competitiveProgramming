#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));

       // 4 отрцательных -- 1 положительное
       // 2 отрцательных -- 3 положительное
       // 5 положительное
       // '-' * '-' = '+'
       ll mx1 = a[0] * a[1] * a[2] * a[3] * a[n - 1];
       ll mx2 = a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3];
       ll mx3 = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
       ll res = max(mx1, max(mx2, mx3));
       cout << res * ll << endl;
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

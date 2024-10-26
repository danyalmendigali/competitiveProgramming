#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;


void solve()
{
       int n; cin >> n;
       int mx1 = 0, mx2 = 0;
       for(int i = 0; i < n; i++){
              int w, h; cin >> w >> h;
              mx1 = max(mx1, w);
              mx2 = max(mx2, h);
       }

       cout << (mx1 + mx2) * 2 << endl;

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();




    return 0;
}

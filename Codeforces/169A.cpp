#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define all(dp) dp.begin(), dp.end()
#define F first
#define daniyaltrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


void solve()
{
    int a, b, c; cin >> a >> b >> c;
    vector<int> dp(a);
    for(int i = 0; i < a; i++){
        cin >> dp[i];
    }
    sort(all(dp));
    int h1 = dp[dp.sz - b], h2 = dp[dp.sz - b - 1];
    cout << h1 - h2 << endl;



}

signed main()
{
    daniyaltrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

// ---

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;


void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    int sum = dp[0];
    int res;
    for(int i = 0; i < n - 1; i++){
        sum = sum + abs(dp[i] - dp[i + 1]);
    }
    res = sum + n + n - 1;

    cout << res << endl;


}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();

    return 0;
}

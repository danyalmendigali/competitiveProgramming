#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <cmath>

#define ll long long
#define sz size()
#define S second
#define F first
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll N = 101;
const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> dp(n, 1);
    for (int i = 2; i <= n; i++) {
        dp[i - 1]++;
        dp[i - 2]++;
    }

    for (int i = 0; i < n; i++) {
        cout << dp[i] << " ";
    }

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}

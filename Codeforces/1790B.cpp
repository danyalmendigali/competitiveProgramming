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
        int n, s, r;
        cin >> n >> s >> r;
        vector<int> dp(n, 1);
        int res = s - r;
        int mx = 6;
        for (int i = 0; i < n; i++) {
            if (res <= 0) {
                break;
            }
            if (dp[i] < mx) {
                dp[i]++;
                res--;
            }
             else{
                mx--;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << dp[i] << " ";
        }

        cout << endl;

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}

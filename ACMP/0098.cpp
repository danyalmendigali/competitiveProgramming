#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (dp.front() >= dp.back()) {
                sum1 += dp.front();
                dp.erase(dp.begin());
            } else {
                sum1 += dp.back();
                dp.pop_back();
            }
        } else {
            if (dp.front() >= dp.back()) {
                sum2 += dp.front();
                dp.erase(dp.begin());
            } else {
                sum2 += dp.back();
                dp.pop_back();
            }
        }
    }

    cout << sum1 << ":" << sum2 << endl;


}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

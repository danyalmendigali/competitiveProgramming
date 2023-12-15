#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

void solve() {
    int a, b, sum = 0;
    cin >> a >> b;
    vector<int> dp(b);

    for(int i = 0; i < b; i++){
        cin >> dp[i];
        sum += dp[i];
    }
    int maxCost = 0;
    for (int i = 0; i < a; i++) {
        maxCost += max(dp[i], 1);
    }
    sort(dp.begin(), dp.end());
    int minCost = 0;
    for (int i = 0; i < a; i++) {
        minCost += dp[0];
        dp[0]--;
        if (dp[0] == 0) {
            sort(dp.begin(), dp.end());
        }
    }

    cout << maxCost << " " << sum << endl;
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

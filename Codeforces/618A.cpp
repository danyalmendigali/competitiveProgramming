#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long9
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;


void solve()
{
    int n; cin >> n;
    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i) {
        int j = i;
        while (j > 0 && dp[j - 1] == dp[j]) {
            dp[j]++;
            j--;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << dp[i] << " ";
    }

}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();




    return 0;
}

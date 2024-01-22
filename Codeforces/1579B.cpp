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
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

map<char, int> mp1;

void solve()
{
    int n;
    cin >> n;

    vector<int> dp(n);
    for (int i = 0; i < n; ++i) {
        cin >> dp[i];
    }
    bool ok = true;
    for (int i = 1; i < n; ++i) {
        if (dp[i] < dp[i - 1]) {
            ok = false;
            break;
        }
    }

    if (ok){
        cout << "0\n";
    }
     else{
        cout << "1" << endl;
        cout << "1 " << n << " " << n - 1 << endl;
    }

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

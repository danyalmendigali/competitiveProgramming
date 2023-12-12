#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <algorithm>
#include <cmath>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second
#define optimus_prime ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


vector<int> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    vector<int> dp(n + 1, 0);

    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i; j <= n; j += i) {
                is_prime[j] = false;
                dp[j]++;
            }
        }
    }

    return dp;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> dp = sieve(n);

    int res = 0;
    for (int i = 2; i <= n; ++i) {
        if (dp[i] == 2) {
            res++;
        }
    }

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

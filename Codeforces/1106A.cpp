#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false)

using namespace std;


const ll inf = 1e9 + 9;
const ll INF = 1e15 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> dp(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dp[i][j];
        }
    }

    if (n <= 2) {
        cout << 0 << endl;
        return;
    }

    int a = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (dp[i][j] == 'X' && dp[i][j] == dp[i - 1][j - 1] && dp[i][j] == dp[i - 1][j + 1] && dp[i][j] == dp[i + 1][j - 1] && dp[i][j] == dp[i + 1][j + 1]) {
                a++;
            }
        }
    }
    cout << a << endl;
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

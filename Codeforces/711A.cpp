#include <cctype>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define maximum INT_MAX

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

void solve()
{
    int n;
    cin >> n;

    vector<string> dp(n);
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
    }

    bool ok = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (dp[i][j] == 'O' && dp[i][j + 1] == 'O') {
                dp[i][j] = '+';
                dp[i][j + 1] = '+';
                ok = true;
                break;
            }
        }
        if (ok) {
            break;
        }
    }

    if (ok) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            cout << dp[i] << endl;
        }
        return;
    }
    cout << "NO" << endl;
}

signed main()
{
    optimus_prime;
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();





    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <climits>

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

void solve() {
    int n;
    cin >> n;

    vector<int> dp(n);
    for (int i = 0; i < n; ++i) {
        cin >> dp[i];
    }

    sort(all(dp));
    int mx = dp[n - 1] - dp[0];
    long long res = 0;
    if (mx == 0){
        res = static_cast<long long>(n - 1) * n / 2;
    }
     else{
        int mn = count(all(dp), dp[0]);
        int mx = count(all(dp), dp[n - 1]);

        res = static_cast<long long>(mn) * mx;
    }

    cout << mx << " " << res << endl;
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

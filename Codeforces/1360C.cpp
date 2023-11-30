#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

// ---

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;

void solve()
{
    int n, odd = 0, even = 0; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        if(dp[i] % 2 == 0){
            odd++;
        }
        if(dp[i] % 2 == 1){
            even++;
        }
    }

    if(odd % 2 == 0 && even % 2 == 0){
        cout << "YES" << endl;
        return;
    }
    sort(all(dp));
    bool ok = false;
    for(int i = 1; i < n; i++){
        if(dp[i] - dp[i - 1] == 1){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

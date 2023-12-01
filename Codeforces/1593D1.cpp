#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
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

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve()
{
    st.clear();
    int n; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    sort(all(dp));
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            res = gcd(res, dp[j] - dp[i]);
        }
    }

    if(res != 0){
        cout << res << endl;
        return;
    }
    cout << -1 << endl;
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

#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;
const int square = 360;

set<int> st;

void solve() {
    int a, n;
    cin >> a >> n;
    vector<int> dp(a);
    for(int i = 0; i < a; i++){
        cin >> dp[i];
    }
    sort(dp.begin(), dp.end());

    if (dp[0] + n >= dp[a - 1] - n){
        cout << dp[0] + n << endl;
        return;
    }

    cout << -1 << endl;

}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
         solve();




    return 0;
}

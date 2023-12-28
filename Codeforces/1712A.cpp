#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

map<int, int> mp;

void solve()
{
    int a, b, ans = 0; cin >> a >> b;
    vector<int> dp(a);
    for(int i = 0; i < a; i++){
        cin >> dp[i];
    }
    for(int i = 0; i < b; i++){
        if(dp[i] > b) ans++;
    }
    cout << ans << endl;
}

signed main()
{
    int t;
    cin >> t;
    while(t--)
        solve();



    return 0;
}

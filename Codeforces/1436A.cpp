#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

set<pair<int, int>> st;
map<int, int> mp;

void solve() {
    int a, b, sum = 0; cin >> a >> b;
    vector<int> dp(a);
    for(int i = 0; i < a; i++){
        cin >> dp[i];
        sum += dp[i];
    }
    if(sum == b) cout << "YES" << endl;
    else cout << "NO" << endl;
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

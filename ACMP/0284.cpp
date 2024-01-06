#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(9); cout.tie(0);

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    int r; cin >> r;
    int a, b;
    for(int i = 0; i < r; i++){
        cin >> a >> b;
        for(int j = a - 1; j < b; j++){
            cout << dp[j] << " ";
        }
        cout << endl;
    }


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    int mx = 1;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(dp[i] == dp[j]){
                mx = max(mx, abs(i - j));
                break;
            }
        }
    }
    cout << mx << endl;




}

signed main()
{
    ios;
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> dp(n);
    int t = dp.sz;
    int d = 0;
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    for(int i = 0; i < k; i++){
        if(i % 2 == 0){
            if(dp.sz == 0){
                cout << t << endl;
                return;
            }
            dp[0]--;
            if (dp[0] == 0){
                dp.erase(dp.begin());
            }
        }
        if(i % 2 == 1){
            if(dp.sz == 0){
                cout << t << endl;
                return;
            }
            dp.back()--;
            if (dp.back() == 0){
                dp.pop_back();
            }
        }
    }
    cout << n - dp.sz << endl;




}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}

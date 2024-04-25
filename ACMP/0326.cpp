#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
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
    int n; cin >> n;
    vector<int> dp(n);
    map<int, int> mp1;
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        mp1[dp[i]]++;
    }
    int mx = 0;
    int mg = 0;
    for(pair<int, int> i : mp1){
        if(i.S > mx){
            mx = i.S;
            mg = i.F;
        }
    }
    cout << mx << " " << mg << endl;
    auto it = dp.begin();
    while (it != dp.end()) {
        if (*it == mg)  it = dp.erase(it);
        else it++;
    }

    for(int i = 0; i < mx; i++){
        dp.pb(mg);
    }
    for(int i = 0; i < dp.sz; i++){
        cout << dp[i] << " ";
    }


}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}

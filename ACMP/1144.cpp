#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ios ios::sync_with_stdio(false);

using namespace std;

void solve()
{
    vector<int> dp;
    int n;
    while (true){
        cin >> n;
        if (n == 0) break;
        dp.push_back(n);
    }
    if (dp.size() <= 2){
        cout << 0 << endl;
        return;
    }

    vector<int> res;
    for (int i = 1; i < dp.size() - 1; i++){
        if (dp[i] > dp[i - 1] && dp[i] > dp[i + 1]){
            res.push_back(i);
        }
    }

    if (res.size() < 2){
        cout << 0 << endl;
        return;
    }
    int mn = dp.size();
    for (int i = 0; i < res.size() - 1; i++){
        mn = min(mn, abs(res[i] - res[i + 1]));
    }

    cout << mn << endl;

}

signed main()

{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

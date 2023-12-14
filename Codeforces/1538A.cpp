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


void solve()
{
    int a; cin >> a;
    vector<int> dp(a);
    for(int i = 0; i < a; i++){
        cin >> dp[i];
    }
    int mn = dp[0], mx = dp[0];
    int ind1, ind2;
    for(int i = 0; i < dp.sz; i++){
        if(dp[i] >= mx){
            mx = dp[i];
            ind2 = i;
        }
        if(dp[i] <= mn){
            mn = dp[i];
            ind1 = i;
        }
    }
    int res = max(ind1 + 1, ind2 + 1);
    res = min(res, ind2 + 1 + a - ind1);
    res = min(res, ind1 + 1 + a - ind2);
    res = min(res, max(a - ind2, a - ind1));
    cout << res << endl;


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

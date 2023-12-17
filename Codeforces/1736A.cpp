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
    int n;
    cin >> n;
    int res1 = 0, res2 = 0, res3 = 0, res4 = 0;

    vector<int> dp1(n), dp2(n);
    for (int i = 0; i < n; i++) {
        cin >> dp1[i];
        if(dp1[i] == 1) res1++;
    }

    for (int i = 0; i < n; i++) {
        cin >> dp2[i];
        if(dp2[i] == 1) res2++;
        if(dp1[i] != dp2[i]){
            res3++;
        }
    }
    int ans;
    if(res3 - abs(res1 - res2) > 0){
        ans = 1;
    }
    else{
        ans = 0;
    }
    int r = abs(res1 - res2);
    cout << r + ans << endl;

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

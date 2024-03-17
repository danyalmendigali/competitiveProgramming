#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ios ios::sync_with_stdio(false);

using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<pair<double, string>> res;
    for (int i = 0; i < n; i++) {
        int ni;
        cin >> ni;
        vector<pair<double, string>> pa(ni);
        for (int j = 0; j < ni; ++j) {
            cin >> pa[j].F >> pa[j].S;
        }
        res.insert(res.end(), pa.begin(), pa.end());
    }
    sort(res.begin(), res.end(), greater<pair<double, string>>());
    cout << res.sz << endl;
    for (auto& participant : res) {
        cout << fixed << setprecision(2) << participant.F << " " << participant.S << endl;
    }
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

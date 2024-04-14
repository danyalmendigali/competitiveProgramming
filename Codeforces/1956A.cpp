#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define pb(a) push_back(a)

void solve()
{
    int k, q; cin >> k >> q;
    vector<int> dp1(k);
    vector<int> dp2(q);
    for(int i = 0; i < k; i++){
        cin >> dp1[i];
    }
    for(int i = 0; i < q; i++){
        cin >> dp2[i];
        cout << min(dp2[i], dp1.front() - 1) << " ";
    }
    cout << endl;

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

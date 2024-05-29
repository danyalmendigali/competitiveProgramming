#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <cmath>
#include <set>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ers() erase()
#define ins() insert()
#define lw() lower_bound()
#define up() upper_bound()
#define all(dp) dp.begin(), dp.end()



void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int alice_res = 0, bob_res = 0;
    int h = 0;
    int last_eaten = 0;
    int l = 0, r = n - 1;

    while (l <= r) {
        if (h % 2 == 0){
            int curr = 0;
            while (l <= r && curr <= last_eaten){
                curr += a[l];
                alice_res += a[l];
                l++;
            }
            last_eaten = curr;
        }
        else{
            int curr = 0;
            while (l <= r && curr <= last_eaten){
                curr += a[r];
                bob_res += a[r];
                r--;
            }
            last_eaten = curr;
        }
        h++;
    }

    cout << h << " " << alice_res << " " << bob_res << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

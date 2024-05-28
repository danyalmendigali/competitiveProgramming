#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

vector<int> solve_2(long long x) {
    vector<int> result;
    int i = 0;
    while (x != 0) {
        if (x % 2 == 0) {
            result.pb(0);
        } else {
            if (x % 4 == 1) {
                result.pb(1);
                x -= 1;
            } else {
                result.pb(-1);
                x += 1;
            }
        }
        x /= 2;
        i++;
    }
    return result;
}


void solve()
{
    int t; cin >> t;
    vector<ll> xs(t);
    for (int i = 0; i < t; ++i) {
        cin >> xs[i];
    }
    for (int i = 0; i < t; ++i) {
        vector<int> result = solve_2(xs[i]);
        cout << result.sz << endl;
        for (int j = 0; j < result.sz; ++j) {
            if (j != 0) cout << " ";
            cout << result[j];
        }
        cout << endl;
    }



}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}

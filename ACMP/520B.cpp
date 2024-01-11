#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

vector<bool> was;
vector<int> res1, res2, comp;
set<int> st1, st2;
map<int, int> mp1, mp2;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n >= m){
        cout << n - m << endl;
        return;
    }

    int ans = 0;
    while (n < m){
        if (m % 2 == 0){
            m /= 2;
        }
        else{
            m++;
        }
        ans++;
    }
    cout << ans + (n - m) << endl;
}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

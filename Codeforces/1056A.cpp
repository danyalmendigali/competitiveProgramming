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
#define S second
#define F first
#define daniyaltrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


map<int, int> mp1;

void solve()
{
    mp1.clear();
    int n;
    int a = 0;
    cin >> n;
    while(n--){
        a++;
        int m; cin >> m;
        vector<int> dp(m);
        for(int i = 0; i < m; i++){
            cin >> dp[i];
            mp1[dp[i]]++;

        }
    }
    int ans = 0;
    for (auto i : mp1) {
        if (i.second == a) {
            cout << i.F << " ";
        }
    }




}

signed main()
{
    daniyaltrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

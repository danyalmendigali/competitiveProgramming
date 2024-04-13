#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
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
    int n, c, d; cin >> n >> c >> d;
    vector<int> dp(n * n);
    int mn = 1e9 + 1;
    for(int i = 0; i < dp.sz; i++){
        cin >> dp[i];
        mn = min(mn, dp[i]);
    }
    vector<int> p;
    for(int i = 0; i < n; i++){
        p.pb(mn + (d * i));
    }
    vector<int> copy_p = p;
    int h = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n; j++){
            copy_p.pb(p[h] + (j * c));
        }
        h++;
    }
    sort(dp.begin(), dp.end());
    sort(copy_p.begin(), copy_p.end());
    if(dp == copy_p){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;


}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}

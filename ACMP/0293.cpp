#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie();

using namespace std;


void solve()
{
    int n;
    cin >> n;
    vector<int> price(n), percent(n), res_sum;
    for (int i = 0; i < n; i++){
        cin >> price[i];
    }
    for (int i = 0; i < n; i++){
        cin >> percent[i];
    }
    for (int i = 0; i < n; i++){
        res_sum.push_back(price[i] * percent[i]);
    }
    int mx = res_sum[0], ind = 1;
    for (int i = 1; i < n; i++){
        if (mx < res_sum[i])
        {
            mx = res_sum[i];
            ind = i + 1;
        }
    }

    cout << ind << endl;
}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

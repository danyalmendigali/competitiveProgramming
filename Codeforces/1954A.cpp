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
    double n, m, k; cin >> n >> m >> k;
    if(m == 1){
        cout << "NO" << endl;
        return;
    }
    if(n - (ceil(double(n) / double(m))) > k){
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

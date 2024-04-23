#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <queue>
#include <map>
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
    int n; cin >> n;
    if(n >= 143){
        cout << "NO" << endl;
        return;
    }
    int g = n * 5 - 5;
    cout << g / 60  << " " << g % 60 << endl;



}

signed main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}

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
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp1[a[i]]++;
    }
    int res = 0;
    for(pair<int, int> i : mp1){
        if(i.S == 2){
            res++;
        }
    }
    cout << res << endl;

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

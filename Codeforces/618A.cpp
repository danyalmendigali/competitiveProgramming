#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

void solve() {
    int n; cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(n % 2 == 0){
        cout << n / 2 << endl;
    }
    else{
        cout << n / 2 + 1 << " " << n / 2 << endl;
    }



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();

    return 0;
}

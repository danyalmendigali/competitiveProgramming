#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;


void solve() {
    string s;
    ll n, k; cin >> n >> s;
    ll sum = n;
    ll g = s.sz;
    while(g < n){
        sum *= (n - g);
        g += s.sz;
    }
    cout << sum << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}

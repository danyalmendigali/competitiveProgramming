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
    ll n; cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(n == 2){
        cout << 2 << endl;
        return;
    }
    else{
        cout << n * (n - 1) * (n - 2) << endl;
        return ;
    }


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}

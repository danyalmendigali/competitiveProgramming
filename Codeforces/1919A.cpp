#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(9); cout.tie(0);

using namespace std;

void solve()
{
    ll a, b; cin >> a >> b;
    ll g = abs(a - b);
    if(g % 2 == 1){
        cout << "Alice" << endl;
    }
    else{
        cout << "Bob" << endl;
    }


}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}

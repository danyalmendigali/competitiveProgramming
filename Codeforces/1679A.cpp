#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>
#include <map>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using namespace std;


void solve()
{
    ll a; cin >> a;
    if(a < 4 || a % 2 == 1){
        cout << -1 << endl;
        return;
    }
    cout << (a + 5) / 6 << " " << a / 4 << endl;

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();




    return 0;
}

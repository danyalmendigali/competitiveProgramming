#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(vec) vec.begin(), vec.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll unsigned long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;
const int N = 1;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll mx = max(c, b);
    ll mn = min(c, b);
    ll result = (mx - mn) + (c - 1);
    ll z = min(a, result);
    a--;

    if(a < result)
    {
        cout << 1 << endl;
    }
    else if(a > result)
    {
        cout << 2 << endl;
    }
    else if(a == result)
    {
        cout << 3 << endl;
    }



}




signed main() {
    optimus_prime;

    int t;
    t = 1;
    cin >> t;

    while(t--)
        solve();




    return 0;
}

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(vec) vec.begin(), vec.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;

void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;
    x -= 1;
    ll a1 = x / n;
    ll b1 = x % n;
    cout << b1 * m + a1 + 1 << endl;



}

signed main() {
    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();




    return 0;
}

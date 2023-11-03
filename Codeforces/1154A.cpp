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
    vector<ll> mx(4);
    for(int i = 0; i < 4; i++)
    {
        cin >> mx[i];
    }

    sort(all(mx));

    ll a1, a2, a3;
    a1 = mx[3] - mx[0];
    a2 = mx[3] - mx[1];
    a3 = mx[3] - mx[2];

    cout << a1 << " " << a2 << " " << a3 << endl;

}

signed main() {
    optimus_prime;

    solve();



    return 0;
}

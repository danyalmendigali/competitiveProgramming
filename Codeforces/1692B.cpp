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
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int rs = (b > a) + (c > a) + (d > a);
        cout << rs << endl;
    }


}

signed main() {
    optimus_prime;

    solve();




    return 0;
}

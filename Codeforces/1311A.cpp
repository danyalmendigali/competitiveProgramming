#include <bits/stdc++.h>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


using namespace std;

void solve()
{
        ll a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
        } else if (a < b) {
            if ((b - a) % 2 == 0) {
                cout << 2 << endl;
            } else {
                cout << 1 << endl;
            }
        } else {
            if ((a - b) % 2 == 0) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }


}


signed main()
{
    optimus_prime;

    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }




    return 0;
}

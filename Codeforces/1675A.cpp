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

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


using namespace std;

void solve() {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (x <= a && y <= b && (x + y) <= (a + b + c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


}


signed main()
{
    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();




    return 0;
}

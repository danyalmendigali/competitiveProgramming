#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;
const int square = 360;

set<int> st1, st2;


void solve()
{
    st1.clear(); st2.clear();
    int a, b, c;
    cin >> a >> b >> c;
    int ans = b + c;
    int g = a - 1;
    if(g >= ans)
    {
        cout << ans + ans + 1 << endl;
    }
    else
    {
        cout << a + a - 1 << endl;
    }

}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    cin >> t;
    while (t--)
        solve();


    return 0;
}

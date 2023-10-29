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

map<int, int> mp;

void solve()
{
    mp.clear();
    ll a, b, c;
    cin >> a >> b >> c;
    ll g = (a + b) / 2;
    if((a + b) % 2 == 0)
    {
        a = (a + b) / 2;
        b = (a + b) / 2;
    }
    if((a + b) % 2 == 1)
    {
        ll f = abs(a - b);
        if(min(a , b) == a)
        {
            a += f / 2;
            b -= f / 2;
        }
        if(min(a , b) == b)
        {
            a -= f / 2;
            b += f / 2;
        }
    }

    ll mx = max(a , b);
    ll t = mx - a;
    ll t1 = mx - b;

    if(c >= t + t1)
    {
        a += t;
        b += t1;
        c -= t + t1;
    }



    cout << (a + (c / 2)) << endl;




}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    cin >> t;
    while(t--)
        solve();


    return 0;
}


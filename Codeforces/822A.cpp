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
#define ll unsigned long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;

ll fact(ll n) {
    int a = 1;
    for (ll i = 2; i <= n; i++) {
        a *= i;
    }


    return a;
}

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll g = min(a, b);
    ll r = fact(g);
    cout << r << endl;
}



signed main() {
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;

    while(t--)
        solve ();




    return 0;
}

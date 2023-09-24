#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll countA = 0;



void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    ll suma = 0, sumb = 0;

    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
    }
    vector<ll> b(n, 0);
    for(ll i = 0; i < n; i++)
    {
        cin >> b[i];
        sumb += b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << min(suma + b[0] * n, sumb + a[0] * n) << endl;
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

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

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


ll a[N][N];
ll countA = 0;

bool prime(int n)
{
    if(n < 2) return false;
    for(int x = 2; x * x <= n; x++)
    {
        if(n % x == 0) return false;
    }

    return true;
}

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    int a = sqrt(x * y * z);

    cout << 4 * (a / x + a / y + a / z);

}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();





    return 0;
}


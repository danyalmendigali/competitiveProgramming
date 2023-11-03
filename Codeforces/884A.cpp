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
#define pb(a) push_back(a)
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;



void solve()
{
    ll n, t;
    cin >> n >> t;

    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans += max(86400 - x, 0);
        if(ans >= t)
        {
            cout << i + 1;
            return;
        }
    }
}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}

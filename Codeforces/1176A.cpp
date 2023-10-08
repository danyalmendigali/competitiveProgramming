
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


ll a[N][N];
ll countA = 0;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    while(n != 1)
    {
        int i = 0;
        if(n % 5 == 0)
        {
            n = (4 * n) / 5;
            ans++;
            i++;
        }
        if(n % 3 == 0)
        {
            n = (2 * n) / 3;
            ans++;
            i++;
        }
        if(n % 2 == 0)
        {
            n /= 2;
            ans++;
            i++;
        }

        if(i == 0)
        {
            cout << -1 << endl;
            return;
        }

    }

    cout << ans << endl;


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

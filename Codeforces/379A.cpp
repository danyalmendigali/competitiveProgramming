#include <iostream>
#include <sstream>
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

int f(int n)
{
	int m = 0;
	while (n)
	{
		n /= 10;
		m++;
	}
	return m;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0, ans2 = 0;
    while(true)
    {
        if(a == 0) break;
        ans++;
        a--;
        ans2++;

        if(ans2 == b)
        {
            a++;
            ans2 = 0;
        }
    }

    cout << ans + a << endl;


}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

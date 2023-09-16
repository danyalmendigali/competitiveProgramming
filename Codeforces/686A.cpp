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
#define ll long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;



void solve()
{
    int n;
    ll x;
    cin >> n >> x;
    ll g = x;
    int f = 0;
    for(int i = 0; i < n; i++)
    {
        char s;
        ll a;
        cin >> s >> a;
        if(s == '+')
        {
            g += a;
        }
        if(s == '-')
        {
            if(g - a < 0)
            {
                f++;
            }
            if(g - a >= 0)
            {
                g -= a;
            }
        }
    }

    cout << g << " " << f << endl;


}

signed main() {
    optimus_prime;

    solve();




    return 0;
}

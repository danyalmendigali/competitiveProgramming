#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
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
    ll n, s;
    cin >> n >>  s;
    vector<ll> v(n);
    vector<ll> d;
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] <= s)
        {
            d.pb(v[i]);
        }
    }

    //for(int i = 0; i < d.size(); i++)
    {
        //cout << d[i] << " ";
    }

    if(d.sz == 0)
    {
        cout << 0 << endl;
        return;
    }

    ll maxElement = d[0];
    for(ll i = 0; i < d.sz; i++)
    {
        if(d[i] > maxElement)
        {
            maxElement = d[i];
        }
    }
    cout << maxElement << endl;

}


signed main()
{

    optimus_prime;

    solve();




    return 0;
}

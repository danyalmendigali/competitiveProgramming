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
    ll a, b;
    cin >> a >> b;
    vector<pair<ll, ll>> p(a);
    vector<ll> dp1(a), dp2(a), dp_res;
    for(ll i = 0; i < a; i++){
        cin >> dp1[i];
        dp_res.pb(dp1[i]);
    }
    for(ll i = 0; i < a; i++){
        cin >> dp2[i];
    }

    sort(all(dp1));
    sort(all(dp2));

    for(ll i = 0; i < a; i++){
        p[i].F = dp1[i];
        p[i].S = dp2[i];
    }


    for (ll i = 0; i < a; i++) {
        for (ll j = 0; j < a; j++) {
            if (dp_res[i] == p[j].F) {
                cout << p[j].S << " ";
                p.erase(p.begin() + j);
                break;
            }
        }
    }
    cout << endl;



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

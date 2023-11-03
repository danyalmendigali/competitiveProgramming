#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

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

const ll N = 1e2 + 9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const int day = 7;

ll a[N][N];
ll countA = 0;
ll x[N];
map<ll , ll> mp;


void solve() {
    mp.clear();
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        cin >> x[i];
        mp[x[i]] = i;
    }

    for(int i = 0 ; i < n; i++)
    {
        if(mp[x[i]] > i + 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;


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

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(a) a.begin() , a.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;


void solve()
{
    ll n;
    cin >> n;
    if(n < 2020)
    {
        cout << "NO" << endl;
        return;
    }
    ll result = n / 2020;
    if(n - (result * 2020) < result + 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

signed main() {
    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();



    return 0;
}

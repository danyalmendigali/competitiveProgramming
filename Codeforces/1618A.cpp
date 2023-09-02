#include <bits/stdc++.h>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld long double
#define F first
#define S second

using namespace std;

const ll N = 55;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

void solve()
{
    vector<ll> a(8);
    for(int i = 1; i <= 7; i++)
    {
        cin >> a[i];
    }

    cout << a[1] << " " << a[2] << " " << a[7] - a[2] - a[1] << endl;
}


signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}

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
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll max_len = 1;
    ll cur_len = 1;
    for (ll i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            cur_len++;
        } else {
            cur_len = 1;
        }

        max_len = max(max_len, cur_len);
    }

    cout << max_len << endl;



}


signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    solve();



    return 0;
}

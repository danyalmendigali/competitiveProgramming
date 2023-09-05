#include <bits/stdc++.h>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(long long i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n) cin >> v[i];

    int maxLength = 1;
    int currentLength = 1;
    for(int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1]) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 1;
        }
    }

    cout << maxLength << endl;
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    solve();

    return 0;
}

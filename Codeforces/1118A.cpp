#include <bits/stdc++.h>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

set <char> myChar;
void solve()
{
    ull n;
    int a, b;
    cin >> n >> a >> b;

    if(a * 2 < b)
    {
        cout << n * a << endl;
    }
    else
    {
        ll result = n / 2 * b + (n % 2 * a);
        cout << result << endl;
    }
/*
*/

}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    ull t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

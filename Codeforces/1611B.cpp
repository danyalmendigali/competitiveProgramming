#include <bits/stdc++.h>
#include <windows.h>

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


const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

void solve()
{
        long long a, b;
        cin >> a >> b;
        long long min_teams = min(a - 1, b - 1);
        cout << min_teams / 4 << endl;

}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();


    return 0;
}

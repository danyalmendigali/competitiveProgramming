#include <bits/stdc++.h>
#include <windows.h>
#include <cmath>

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

int x[N];
map<ll, ll> mp;

void solve()
{
    int n, a = 0, b = 0;;
    cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++)
    {
        cin >> dp[i];
        if(dp[i] == 1)
        {
            b++;
        }
        if(dp[i] == 0)
        {
            a++;
        }
    }

    if(n == 1 && b == 1)
    {
        cout << "YES" << endl;
        return;
    }


    if(n == 1 && a == 1)
    {
        cout << "NO" << endl;
        return;
    }
    if(n >= 2 && a == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if(a > 2)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
    }


}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}

#include <bits/stdc++.h>
#include <algorithm>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i   , a, b) for(int i = a; i < b; i++)
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

string s;
void solve()
{
    ll a = 0, b = 0, c = 0;
    cin >> s;
    FOR(i, 0, s.sz)
    {
        if(s[i] == 'A') a++;
        if(s[i] == 'B') b++;
        if(s[i] == 'C') c++;
    }


     cout << (a + c == b || b + c == a ? "YES" : "NO") << endl;
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

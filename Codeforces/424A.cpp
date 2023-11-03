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
    int n, x1 = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < s.sz; i++) {
        if (s[i] == 'X' && x1 < s.sz / 2)
        {
            s[i] = 'x';
            x1++;
        }
        else if (s[i] == 'x' && x1 > s.sz / 2)
        {
            s[i] = 'X';
            x1++;
        }
    }

    cout << x1 << endl;





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

#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    ll cnt = 0;

    for(int i = 0; i < s.sz; i++)
    {
        for(int j = i + 1; j < s.sz; j++)
        {
            for(int k = j + 1; k < s.sz; k++)
            {
                if(s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;



}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}


#include <bits/stdc++.h>
#include <cmath>

#define mendigali ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
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

const int N = 2e5 + 5 , inf = 2e9 + 7;
const ll INF = 1e18 ,   mod = 1e9 + 7 , P = 6547;

map<string, ll> mp;
map<ll, ll> mp1, mp2;

void solve()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;
    while(sum <= m)
    {
        for(int i = 1; i <= n; i++)
        {
            m -= i;
            if(m < 0)
            {
                m += i;
                cout << m << endl;
                return;
            }
        }
    }
    cout << m << endl;



}

signed main()
{
    mendigali;

    ll t;
    t = 1;
    //cin >> t;
    while (t--)
         solve();


    return 0;
}

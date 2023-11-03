#include <bits/stdc++.h>
#include <algorithm>


#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

using namespace std;

void solve()
{

    ll n, m;
    cin >> n >> m;
    for(ll i = 1; i <= m; i++)
    {
        for(ll j = 1; j <= n; j++)
        {
            char c;
            cin >> c;
            a[i][j] = c;

            if(c == 'B')
            {
                countA++;
            }
            if(c == 'W')
            {
                countA++;
            }
            if(c == 'G')
            {
                countA++;
            }
        }
    }



    cout << (n  == m * n ? "#Black&White" : "&Color") << endl;



}


signed main()
{
    optimus_prime;


    solve();




    return 0;
}

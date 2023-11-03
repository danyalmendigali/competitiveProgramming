#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
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


ll a[N][N];
ll countA = 0;



void solve() {
    ll n, m, p = 0, q = 0, k = 0, t = 0;
    cin >> m >> n;
    vector<vector<char>> dp(m + 88, vector<char>(n + 88));
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> dp[i][j];
            if(dp[i][j] == 'B')
            {
                if(k == 0)
                {
                    p = i;
                    q = j;
                    k++;
                }
                if(p == i)  t++;
            }
        }


    cout << p + t / 2 << " " << q + t / 2 << endl;
}

signed main()
{

    optimus_prime;
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();





    return 0;
}

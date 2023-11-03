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
const int day = 7;

ll a[N][N];
ll countA = 0;


void solve()
{
    int n, m, g = 0;
    cin >> n >> m;
    vector<int> dp(n);
    for(int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(sum + dp[i] <= m)
        {
            sum += dp[i];
        }
        else
        {
            sum = dp[i];
            g++;
        }
    }

    if(sum != 0)
    {
        g++;
    }

    cout << g << endl;

}

signed main()
{
    optimus_prime;

    solve();





    return 0;
}

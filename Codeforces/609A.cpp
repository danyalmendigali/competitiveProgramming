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
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> dp(n);
    for(int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }

    sort(all(dp));
    int sum = dp[dp.size() - 1];
    int g = 1;

    for(int i = dp.sz - 1; i >= 0; i--)
    {
        if(sum >= m)
        {
            break;
        }
        sum += dp[i - 1];
        g++;
        if(sum >= m)
        {
            break;
        }
    }
    cout << g << endl;



}

signed main()
{

    optimus_prime;

    int t;
    //cin >> t;
    //while(t--)
        solve();





    return 0;
}

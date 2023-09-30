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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> dp(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    ll g = 0;
    vector<bool> visited(n, false);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i != j && dp[i] + dp[j] <= 4 && !visited[i] && visited[j])
            {
                g++;
                visited[i] = true;
                visited[j] = true;
            }
        }
    }

    cout << g << endl;


}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}

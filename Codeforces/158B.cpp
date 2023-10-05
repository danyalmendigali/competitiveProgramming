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
    int n;
    cin >> n;
    int a = 0;
    vector<int> dp(n);
    vector<bool> visited(n, false);
    for(int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    for(int i = 0; i < n; i++)
    {
            if(dp[i] == 4 && !visited[i])
            {
                a++;
                visited[i] = true;
            }
            for(int j = 0; j < n; j++)
            {
                if(i != j && !visited[i] && !visited[j] && dp[i] + dp[j] <= 4)
                {
                    a++;
                    visited[i] = true;
                    visited[j] = true;
                }

            }
    }

    cout << a << endl;


}

signed main()
{
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;

    while(t--)
         solve();





    return 0;
}

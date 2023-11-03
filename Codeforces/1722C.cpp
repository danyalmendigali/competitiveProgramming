#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

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
    map<string, int> mp;
    string g[4][1005];
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> g[i][j];
            mp[g[i][j]]++;
        }
    }

    for(int i = 1; i <= 3; i++)
    {
        int cnt = 0;
        for(int j = 1; j <= n; j++)
        {
            if(mp[g[i][j]] == 1)
            {
                cnt += 3;
            }
            else if(mp[g[i][j]] == 2)
            {
                cnt += 1;
            }
        }

        cout << cnt << " ";
    }

}

signed main()
{
    optimus_prime;

    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();





    return 0;
}

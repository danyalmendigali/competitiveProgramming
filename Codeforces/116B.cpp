#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

set<int> st;
map<string , int> mp;
map <ll, ll> mp1 , mp2;
vector<ll> v, v1;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> dp(n, vector<char>(m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> dp[i][j];
        }
    }
    int a = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(dp[i][j] == 'W')
            {

                if(i > 0 && dp[i - 1][j] == 'P')
                {
                    a++;
                    dp[i - 1][j] = '.';
                    continue;
                }
                if(i < n - 1 && dp[i + 1][j] == 'P')
                {
                    a++;
                    dp[i + 1][j] = '.';
                    continue;
                }
                if(j > 0 && dp[i][j - 1] == 'P')
                {
                    a++;
                    dp[i][j - 1] = '.';
                    continue;
                }
                if(j < m - 1 && dp[i][j + 1] == 'P')
                {
                    a++;
                    dp[i][j + 1] = '.';
                    continue;
                }

            }
        }
    }

    cout << a << endl;


}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();




    return 0;
}

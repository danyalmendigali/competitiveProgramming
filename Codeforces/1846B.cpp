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
const int day = 7;

ll a[N][N];
ll countA = 0;

void solve() {
    vector<vector<char>> dp(3, vector<char>(3));
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> dp[i][j];
        }
    }

    if(dp[0][0] == dp[0][1] && dp[0][1] == dp[0][2] && dp[0][2] != '.')
    {
        cout << dp[0][0] << endl;
        return;
    }
    if(dp[1][0] == dp[1][1] && dp[1][1] == dp[1][2] && dp[1][2] != '.')
    {
        cout << dp[1][0] << endl;
        return;
    }
    if(dp[2][0] == dp[2][1] && dp[2][1] == dp[2][2] && dp[2][2] != '.')
    {
        cout << dp[2][0] << endl;
        return;
    }


    if(dp[0][0] == dp[1][0] && dp[1][0] == dp[2][0] && dp[0][0] != '.')
    {
        cout << dp[0][0] << endl;
        return;
    }

    if(dp[0][1] == dp[1][1] && dp[1][1] == dp[2][1] && dp[0][1] != '.')
    {
        cout << dp[0][1] << endl;
        return;
    }

    if(dp[0][2] == dp[1][2] && dp[1][2] == dp[2][2] && dp[0][2] != '.')
    {
        cout << dp[0][2] << endl;
        return;
    }


    if(dp[0][0] == dp[1][1]  && dp[1][1] == dp[2][2] && dp[2][2] != '.')
    {
        cout << dp[0][0] << endl;
        return;
    }

    if(dp[0][2] == dp[1][1] && dp[1][1] == dp[2][0] && dp[0][2] != '.')
    {
        cout << dp[0][2] << endl;
        return;
    }

    cout << "DRAW" << endl;


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

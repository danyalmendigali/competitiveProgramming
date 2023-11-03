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
    int n;
    cin >> n;
    vector<int> dp(day);
    for (int i = 0; i < day; i++)
    {
        cin >> dp[i];
    }

    int dayOfWeek = 0;
    while (n > 0)
    {
        n -= dp[dayOfWeek];
        if (n <= 0)
        {
            cout << dayOfWeek + 1 << endl;
            return;
        }
        dayOfWeek = (dayOfWeek + 1) % day;
    }
}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}

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
    int sizeVector;
    cin >> sizeVector;
    int newSizeVector = sizeVector - 1;
    vector<int> dp(newSizeVector);
    FOR(i, 0, newSizeVector) cin >> dp[i];

    dp.pb(0);
    dp.insert(dp.begin(), 0);

    int a, b;
    cin >> a >> b;

    /*
    FOR(i, 0, dp.sz)
    {
        cout << dp[i] << " ";
    }
    */


    int sum = 0;
    for(int i = a; i < b; i++)
    {
        sum += dp[i];
    }
    cout << sum << endl;



}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}

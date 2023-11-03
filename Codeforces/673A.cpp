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


ll countA = 0;

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n);
    FOR(i , 0 , n) cin >> dp[i];

    int k = 1;
    for(int i = 0; i < n; i++)
    {
        if(dp[i] == k)
        {
            k += 2;
        }
        else
        {
            k++;
        }
    }

    cout << k - 1 << endl;


}

signed main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }





    return 0;
}

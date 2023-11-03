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



void solve() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;
    vector<int> dp(n);
    FOR(i, 0, n){
        cin >> dp[i];
    }
    ll count =0;
    ll idx = 0;
    for(int i = 1; i < n; i++){
        if(dp[i] < dp[i - 1]){
            count++;
            idx = i;
        }
    }
    if(count == 0)
    {
        cout << count << endl;
    }
    else if(count == 1)
    {
        if(dp[0] >= dp[n - 1])
        {
            cout << n - idx << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}

signed main()
{

    optimus_prime;
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();







    return 0;
}

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
    int n; cin >> n;
    vector<int> dp(n);
    int res = 0;
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        if(dp[i] == 4){
            a4++;
        }
        if(dp[i] == 3){
            a3++;
        }
        if(dp[i] == 2){
            a2++;
        }
        if(dp[i] == 1){
            a1++;
        }
    }

    res += a4;
    int mn = min(a3, a1);
    a3 -= mn;
    a1 -= mn;
    res += mn;
    cout << res << endl;

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

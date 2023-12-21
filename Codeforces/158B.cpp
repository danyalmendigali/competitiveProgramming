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
    int n, res = 0;
    cin >> n;

    int a4 = 0, a3 = 0, a2 = 0, a1 = 0;
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> dp[i];
        if(dp[i] == 1){
            a1++;
        }
        if(dp[i] == 2){
            a2++;
        }
        if(dp[i] == 3){
            a3++;
        }
        if(dp[i] == 4){
            a4++;
        }
    }
    a1 = max(a1 - a3, 0);
    a2 = a2 * 2;
    cout << a4 + a3 + (a2 + a1 + 3) / 4 << endl;





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

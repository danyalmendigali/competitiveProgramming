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
    vector<int> dp(n), dp2(n);

    for (int i = 0; i < n; i++) {
        cin >> dp[i];
        dp2[i] = dp[i];
    }

    sort(all(dp2));

    int l = -1, r = -1;
    for (int i = 0; i < n; i++) {
        if (dp[i] != dp2[i]) {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (dp[i] != dp2[i]) {
            r = i;
            break;
        }
    }

    if (l == -1 && r == -1){
        cout << "yes" << endl;
        cout << "1 1" << endl;
    }
    else{
        reverse(dp.begin() + l, dp.begin() + r + 1);
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (dp[i] != dp2[i]) {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "yes" << endl;
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }




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

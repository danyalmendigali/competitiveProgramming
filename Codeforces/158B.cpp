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
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> dp[i];
    }

    int res = 0;
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;

    for (int i = 0; i < n; i++) {
        if (dp[i] == 4) {
            a4++;
        } else if (dp[i] == 3) {
            a3++;
        } else if (dp[i] == 2) {
            a2++;
        } else {
            a1++;
        }
    }

    res += a3;
    a3 = 0;

    while (a2 > 0 && a1 > 1) {
        res++;
        a2--;
        a1 -= 2;
    }

    while (a3 > 0 && a1 > 0) {
        res++;
        a3--;
        a1--;
    }

    while (a4 > 0) {
        res++;
        a4--;
    }
    while (a3 > 0) {
        res++;
        a3--;
    }
    while (a2 > 0) {
        res++;
        a2--;
    }

    while (a1 > 0) {
        res++;
        a1--;
    }

    cout << res - 1 << endl;


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

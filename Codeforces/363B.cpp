#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

// Алгоритм двух указателей(или скользящего окна), который эффективно находит минимальную сумму подотрезка фиксированной длины k

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }

    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += dp[i];
    }
    int mn_sum = sum;
    int ind = 0;

    for(int i = 1; i <= n - k; i++){
        sum = sum - dp[i - 1] + dp[i + k - 1];
        if(sum < mn_sum){
            mn_sum = sum;
            ind = i;
        }
    }

    cout << ind + 1 << endl;
}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    // cin >> t;
    while(t--)
        solve();

    return 0;
}

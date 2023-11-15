#include <cctype>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define maximum INT_MAX

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

// Быстрая сортировка

pair<int, int> p[N];

vector<int> quickSort(const vector<int>& dp) {
    if (dp.size() < 2) {
        return dp;
    } else {
        int pivot = dp[0];
        vector<int> low, high;
        for (int i = 1; i < dp.size(); i++) {
            if (dp[i] <= pivot) {
                low.push_back(dp[i]);
            } else {
                high.push_back(dp[i]);
            }
        }

        vector<int> sortedLow = quickSort(low);
        vector<int> sortedHigh = quickSort(high);

        vector<int> res = sortedLow;
        res.push_back(pivot);
        res.insert(res.end(), sortedHigh.begin(), sortedHigh.end());

        return res;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }

    vector<int> res = quickSort(dp);
    for(int i = 0; i < res.sz; i++){
        cout << res[i] << " ";
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

#include <bits/stdc++.h>
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

vector <ll> quicksort(const vector <ll> dp)
{
    if(dp.sz < 2)
    {
        return dp;
    }
    else
    {
        ll element = dp[0];
        vector <ll> low, high;
        for(ll i = 1; i < dp.size(); i++) {
        if(dp[i] < element)
        {
            low.push_back(dp[i]);
        }
        else
        {
            high.push_back(dp[i]);
        }
      }

        vector <ll> newSortedLow = quicksort(low);
        vector <ll> newSortedHigh = quicksort(high);

        vector <ll> res = newSortedLow;
        res.push_back(element);
        res.insert(res.end(), newSortedHigh.begin(), newSortedHigh.end());


        return res;

    }
}

void solve()
{
    int n, m;
    cin >> n;
    vector<int> dp1(n);

    for (int i = 0; i < n; i++) {
        cin >> dp1[i];
    }

    cin >> m;
    vector<int> dp2(m);

    for (int i = 0; i < m; i++) {
        cin >> dp2[i];
    }

    vector<int> merged_arr(n + m);

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (dp1[i] <= dp2[j]) {
            merged_arr[k] = dp1[i];
            i++;
        } else {
            merged_arr[k] = dp2[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        merged_arr[k] = dp1[i];
        i++;
        k++;
    }

    while (j < m) {
        merged_arr[k] = dp2[j];
        j++;
        k++;
    }

    for (int num : merged_arr) {
        cout << num << " ";
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

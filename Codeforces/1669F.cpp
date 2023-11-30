#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

// ---

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;


void solve()
{
        int n;
        cin >> n;

        vector<int> w(n);
        for (int i = 0; i < n; ++i) {
            cin >> w[i];
        }

        int left = 0, right = n - 1;
        int aliceSum = 0, bobSum = 0, total = 0;

        while (left <= right) {
            if (aliceSum <= bobSum) {
                aliceSum += w[left];
                left++;
            } else {
                bobSum += w[right];
                right--;
            }

            if (aliceSum == bobSum) {
                total = aliceSum;
            }
        }

        cout << total << endl;


}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

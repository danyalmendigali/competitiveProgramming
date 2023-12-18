#include <iostream>
#include <vector>
#include <set>

typedef long long ll;

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

bool hasSubsetWithSum(const multiset<ll>& numberSet, ll targetSum) {
    vector<bool> possibleSums(targetSum + 1, false);
    possibleSums[0] = true;

    for (ll num : numberSet) {
        for (ll i = targetSum; i >= num; --i) {
            if (possibleSums[i - num]) {
                possibleSums[i] = true;
                if (i == targetSum) {
                    return true;
                }
            }
        }
    }

    return possibleSums[targetSum];
}

void solve() {
    ll n;
    cin >> n;
    multiset<ll> numberSet;

    for (ll i = 0; i < n; i++) {
        ll operationType, value;
        cin >> operationType >> value;

        if (operationType == 1) {
            numberSet.insert(1 << value);
        }

        if (operationType == 2) {
            ll targetValue = value;
            bool isSubsetSumPossible = hasSubsetWithSum(numberSet, targetValue);
            cout << (isSubsetSumPossible ? "YES" : "NO") << endl;
        }
    }
}

int main() {
    int t;
    t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

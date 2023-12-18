#include <iostream>
#include <vector>
#include <unordered_set>

typedef long long ll;

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

bool hasSubsetWithSum(const vector<ll>& numberSet, ll targetSum) {
    unordered_set<ll> possibleSums;
    possibleSums.insert(0);

    for (ll num : numberSet) {
        vector<ll> newSums;
        for (ll sum : possibleSums) {
            newSums.push_back(sum + num);
        }
        for (ll newSum : newSums) {
            possibleSums.insert(newSum);
        }
    }

    return possibleSums.count(targetSum) > 0;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> numberSet;

    for (ll i = 0; i < n; i++) {
        ll operationType, value;
        cin >> operationType >> value;

        if (operationType == 1) {
            numberSet.push_back(1 << value);
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

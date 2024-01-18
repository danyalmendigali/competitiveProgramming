#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

vector<bool> was;
vector<int> res1, res2, comp;
set<int> st1, st2;
map<int, int> mp1, mp2;

void solve()
{
    int N, M; cin >> N >> M;
    vector<int> set1(N), set2(M);
    for (int i = 0; i < N; ++i) {
        cin >> set1[i];
    }
    for (int i = 0; i < M; ++i) {
        cin >> set2[i];
    }

    unordered_set<int> uniqueElements1(set1.begin(), set1.end());
    unordered_set<int> uniqueElements2(set2.begin(), set2.end());

    vector<int> res;
    for (const auto& i : uniqueElements1) {
        if (uniqueElements2.find(i) != uniqueElements2.end()) {
            res.pb(i);
        }
    }

    sort(all(res));

    for (const auto& element : res) {
        cout << element << " ";
    }
}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

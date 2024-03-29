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
    int N, M;
    cin >> N >> M;

    set<int> set1, set2;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        set1.insert(num);
    }

    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        set2.insert(num);
    }

    vector<int> intersection;

    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), back_inserter(intersection));

    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;
}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

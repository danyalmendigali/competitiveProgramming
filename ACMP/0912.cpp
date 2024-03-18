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
    int N;
    cin >> N;

    vector<int> colors(N);
    for (int i = 0; i < N; ++i) {
        cin >> colors[i];
    }

    map<int, int> colorCount;
    for (int i = 0; i < N; ++i) {
        colorCount[colors[i]]++;
    }

    int mostCommonColor = colors[0]; // предполагаем, что самый частый цвет - первый встреченный
    int maxCount = colorCount[colors[0]]; // количество встреч встреченного цвета

    for (const auto& pair : colorCount) {
        if (pair.second > maxCount || (pair.second == maxCount && pair.first < mostCommonColor)) {
            // если нашли цвет с большим количеством встреч или с меньшим номером
            mostCommonColor = pair.first;
            maxCount = pair.second;
        }
    }

    cout << mostCommonColor << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

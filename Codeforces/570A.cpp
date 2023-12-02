#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second;
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> votes(m, vector<int>(n));

    // Считываем данные
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> votes[i][j];
        }
    }

    // Подсчет результатов по городам
    vector<int> city_wins(n, 0);
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            if (votes[i][j] > votes[i][city_wins[j]]) {
                city_wins[j] = i;
            }
        }
    }

    // Подсчет результатов по кандидатам
    vector<int> candidate_wins(n, 0);
    for (int i = 0; i < n; ++i) {
        candidate_wins[city_wins[i]]++;
    }

    // Определение победителя
    int winner = 0;
    for (int i = 1; i < n; ++i) {
        if (candidate_wins[i] > candidate_wins[winner]) {
            winner = i;
        }
    }

    cout << winner + 1 << endl; // Учитываем номерацию кандидатов с 1
}


signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();
}

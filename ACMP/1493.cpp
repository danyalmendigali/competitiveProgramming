#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

vector<string> createTable(int rows, int cols) {
    vector<string> table(rows, string(cols, '.'));

    for (int i = 0; i < rows; ++i) {
        if (i % 3 == 0) {
            for (int j = 0; j < cols; ++j) {
                table[i][j] = '#';
            }
        } else {
            table[i][0] = '#';
            table[i][cols - 1] = '#';
        }
    }

    return table;
}

// Функция для вывода таблицы
void printTable(const vector<string>& table) {
    for (const auto& row : table) {
        cout << row << endl;
    }
}

void solve()
{
    int N;
    cin >> N;

    vector<string> table = createTable(N, N);
    printTable(table);






}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

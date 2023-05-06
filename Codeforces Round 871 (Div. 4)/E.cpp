#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int n, m;
vector<vector<int>> grid;
vector<vector<bool>> visited;

int dfs(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0 || visited[i][j]) {
        return 0;
    }
    visited[i][j] = true;
    int volume = grid[i][j];
    volume += dfs(i-1, j);
    volume += dfs(i+1, j);
    volume += dfs(i, j-1);
    volume += dfs(i, j+1);
    return volume;
}

int findLargestLake() {
    int largestLake = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > 0 && !visited[i][j]) {
                int volume = dfs(i, j);
                largestLake = max(largestLake, volume);
            }
        }
    }
    return largestLake;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        grid.assign(n, vector<int>(m));
        visited.assign(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        cout << findLargestLake() << endl;
    }
    return 0;
}

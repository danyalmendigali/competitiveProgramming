#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;

map<char, int> mp;

vector<vector<int>> gridToGraph(int N, int M, vector<vector<char>>& grid) {
    vector<vector<int>> graph(N * M);
    auto valid = [&](int i, int j) {
        return i >= 0 && j >= 0 && i < N && j < M && grid[i][j] == '#';
    };
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (grid[i][j] == '#') {
                int u = i * M + j;
                int dr[] = {-1, 1, 0, 0};
                int dc[] = {0, 0, -1, 1};
                for (int k = 0; k < 4; ++k) {
                    int ni = i + dr[k];
                    int nj = j + dc[k];
                    if (valid(ni, nj)) {
                        int v = ni * M + nj;
                        graph[u].push_back(v);
                    }
                }
            }
        }
    }
    return graph;
}

void solve()
{
    int N, M;
    cin >> N >> M;
    vector<vector<char>> grid(N, vector<char>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }
    auto graph = gridToGraph(N, M, grid);
    cout << "Graph representation:\n";
    for (int u = 0; u < N * M; ++u) {
        cout << "Vertex " << u << ": ";
        for (int v : graph[u]) {
            cout << v << " ";
        }
        cout << endl;
    }


}

signed main()
{
    _mendigali_;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}

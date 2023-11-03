#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

set<int> st;
map <int, int> mp1 , mp2;
vector<ll> v, v1;

vector<int> dijkstra(vector<vector<pair<int, int>>> &g, int n, int start) {
    vector<int> d(n, inf), p(n);
    d[start] = 0;
    vector<char> u(n);

    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v])) v = j;
        }
        if (d[v] == inf) {
            break;
        }
        u[v] = true;
        for (int j = 0; j < g[v].size(); j++) {
            int to = g[v][j].F;
            int len = g[v][j].S;
            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }

    vector<int> ans;
    for (int i = n - 1; i != start; i = p[i]) {
        ans.push_back(i);
    }
    ans.push_back(start);

    return ans;
}

signed main()
{
    ios;
    int n;
    cin >> n;
    vector<vector<pair<int, int>> > g(n);

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        g[i].resize(m);
        for (int j = 0; j < m; j++) {
            cin >> g[i][j].F >> g[i][j].S;
        }
    }

    int start, end;
    cin >> start >> end;

    vector<int> path = dijkstra(g, n, start);

    if (path[0] != start) {
        cout << -1 << endl;
    } else {
        cout << path.size() - 1 << endl;
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
    }





    return 0;
}


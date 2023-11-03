#include <bits/stdc++.h>
#include <windows.h>
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


void dijkstra(vector<vector<ll>>& dp, ll startPoint, ll endPoint, vector<ll>& dist, vector<ll> &path)
{
    ll size_dp = dp.size();
    vector<bool> visited(size_dp, false);
    dist.assign(size_dp, inf);
    path.assign(size_dp, -1);

    dist[startPoint] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, startPoint});

    while(!pq.empty())
    {
        ll u = pq.top().S;
        pq.pop();

        FOR(v, 0, size_dp)
        {
            if(dp[u][v] != 0 && !visited[v])
            {
                int newDist = dist[u] + dp[u][v];
                if(newDist < dist[v])
                {
                    dist[v] = newDist;
                    path[v] = u;

                    pq.push({dist[v], v});
                }
            }
        }
        visited[u] = true;
    }
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);



    ll size_dp, startPoint, endPoint;
    cin >> size_dp >> startPoint >> endPoint;

    vector<vector<ll>> dp(size_dp, vector<ll>(size_dp, 0));
    for(int i = 0; i < size_dp; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        dp[u][v] = w;
    }

    vector<ll> dist, path;
    dijkstra(dp, startPoint, endPoint, dist, path);

    vector<ll> result;
    for(ll i = endPoint; i != -1; i = path[i])
    {
        result.push_back(i);
    }
    for(ll i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }

    return 0;
}

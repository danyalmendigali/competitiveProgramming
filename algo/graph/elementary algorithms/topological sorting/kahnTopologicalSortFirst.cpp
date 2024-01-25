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
#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

vector<bool> was;
vector<int> res1, res2;
queue<int> q;
set<int> st;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

void khan(int size_graph)
{
    vector<int> degree(size_graph, 0);
    for(int i = 0; i < g2.sz; i++){
        degree[g2[i].S - 1]++;
    }
    queue<int> q;
    for(int i = 0; i < size_graph; i++){
        if(degree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int numFront = q.front(); q.pop();
        res1.pb(numFront + 1);
        for(int i : g1[numFront]){
            if(--degree[i] == 0){
                q.push(i);
            }
        }
    }
}

void solve()
{
    was.clear(); res1.clear();

}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}

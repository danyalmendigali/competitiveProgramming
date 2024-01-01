#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <queue>

#define ll long long
#define F first
#define S second
#define pb(a) push_back(a)
#define sz size()
#define daniyaltrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;


vector<int> res1, comp;
vector<int> mp1, mp2;
set<int> st1, st2;
vector<bool> was;


using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair =  vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;


void dfs(ll curr, ll from = -1) {
    bool ok = false;
    was[curr] = true;
    comp.push_back(curr + 1);
    for(int i : g1[curr]){
        if(curr == from){
            continue;
        }
        if(!was[i]){
            dfs(i, curr);
        } else if(was[i]){
            ok = true;
        }
    }
    was[curr] = 2;
}

int numComponent() {
    int component = 0;
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]){
            component++;
            comp.clear();
            dfs(i);
        }
    }
    return component;
}


//  Нахождение компонет связности
//void findComponentGraph() {
//    for(int i = 0; i < g1.sz; i++) was[i] = false;
//    for(int i = 0; i < g1.sz; i++) {
//        if(!was[i]) {
//            comp.clear();
//            dfs(i);
//            cout << comp.sz << endl;
//            for(int j = 0; j < comp.sz; j++) {
//                cout <<  comp[j] << " ";
//            }
//            cout << endl;
//        }
//    }
//}

void solve(){
    res1.clear(); was.clear(); comp.clear();
    int n;
    cin >> n;
    was.assign(n, false);
    vector<vector<int>> matrix(n, vector<int>(n));
    g1.resize(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                g1[i].push_back(j);
                g1[j].push_back(i);
            }
        }
    }
    int component = numComponent();

    bool ok = false;
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]) dfs(i, -1);
    }

    if(!ok && component == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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


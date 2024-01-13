#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

vector<pair<int, int>> p;
set<pair<int, int>> st;
set<int> st1;
vector<int> res;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

void solve(){
    int n, m;
    cin >> n >> m;
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
        g1[g2[i].S - 1].push_back(g2[i].F - 1);
    }
//    cout << endl << endl;
//    for(int i = 0; i < g1.sz; i++){
//        cout << i + 1 << " ";
//        for(int j = 0; j < g1[i].sz; j++){
//            cout << g1[i][j] + 1 << " ";
//        }
//        cout << endl;
//    }

    int a = 0, b = 0;
    int a1 = 0, b1 = 0;
    int a2 = 0, b2 = 0;
    for(int i = 0; i < g1.sz; i++){
        if(g1[i].sz == 1){
            a++;
        }
        if(g1[i].sz == 2){
            b++;
        }
    }

    if(a == 2 && b == n - 2){
        cout << "bus topology" << endl;
        return;
    }


    for(int i = 0; i < g1.sz; i++){
        if(g1[i].sz == 2){
            a1++;
        }
    }
    if(a1 == n){
        cout << "ring topology" << endl;
        return;
    }



    for(int i = 0; i < g1.sz; i++){
        if(g1[i].sz == n - 1){
            a2++;
        }
        if(g1[i].sz == 1){
            b2++;
        }
    }
    if(a2 == 1 && b2 == n - 1){
        cout << "star topology" << endl;
        return;
    }

    cout << "unknown topology" << endl;





}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}

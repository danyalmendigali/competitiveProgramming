#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define daniyaltrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

string name[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};


void solve()
{
    ll a, res = 1; cin >> a;
    while(res * 5 < a){
        a -= res * 5;
        res *= 2;
    }
    int g = (a - 1) / res;
    cout << name[g] << endl;






}

signed main()
{
    daniyaltrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

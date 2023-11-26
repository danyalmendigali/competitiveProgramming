#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <climits>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
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

using Edge = int;
using Vertex = vector<Edge>;
using Graph = vector<Vertex>;

Graph g;

void solve() {
    int n; cin >> n;
    g.resize(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            bool t; cin >> t;
            if(t) g[i].pb(j);
        }
    }

    for(int i = 0; i < g.sz; i++){
        cout << g[i].sz << " ";
    }



    /*
    for(int i = 0; i < g.sz; i++){
        cout << g[i].sz << " : ";
        for(int j = 0; j < g.sz; j++){
            cout << g[i][j] + 1 << " ";
        }
    }
    */


}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;

    while(t--)
         solve();





    return 0;
}

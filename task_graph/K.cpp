#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using GraphMatrix = vector<vector<vertex>>;
using GrapgListSet = set<pair<vertex, vertex>>;

GraphMatrix g2;
GrapgListSet st;

void solve()
{
    st.clear();
    int n, m; cin >> n >> m;
    int res = 0 ;
    g2.resize(n, vector<vertex>(n));
    for(int i = 0; i < m; i++){
        int to, from;
        cin >> to >> from;
        st.insert({to - 1, from - 1});
    }

    if(st.sz == m){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;


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

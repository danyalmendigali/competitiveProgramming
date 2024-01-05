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
#define all(dp) dp.begin(), dp.end()



using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using Graph = vector<pair<vertex, vertex>>;
using GraphAdjList = vector<vector<vertex>>;

GraphAdjList g2;

vector<int> res, res2, ans;
map<int, int> mp;
set<int> st, st2;

void solve()
{
    st.clear(); mp.clear(); st2.clear();
    int n, val; cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    g2.resize(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                g2[i].push_back(j + 1);
            }
        }
    }
    for(int i = 0; i < n; i++){
        //cout << i << " ";
        for(int j = 0; j < g2[i].sz; j++){
            st.insert(g2[i][j]);
        }
    }
    for(int i = 1; i <= n; i++){
        st2.insert(i);
    }
    for(const auto& i : st2){
        if(st.find(i) == st.end()){
            res2.pb(i);
        }
    }
    /*
    for(int i = 0; i < res2.sz; i++){
        cout << res2[i] << " ";
    }
    */


    for(int i = 0; i < n; i++){
        if(g2[i].sz == 0){
            res.pb(i + 1);
        }
    }



    cout << res2.sz << " ";
    for(int i = 0; i < res2.sz; i++){
        cout << res2[i] << " ";
    }
    cout << endl;
    cout << res.sz << " ";
    for(int i = 0; i < res.sz; i++){
        cout << res[i] << " ";
    }





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

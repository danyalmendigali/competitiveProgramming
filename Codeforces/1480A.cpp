#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalutrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using Graph = vector<pair<vertex, vertex>>;
using GraphAdjList = vector<vector<vertex>>;


void solve()
{
    string s, str; cin >> s;
    for(int i = 0; i < s.sz; i++){
        if(i % 2 == 0){
            if(s[i] == 'a'){
                str += 'b';
            }
            else{
                str += 'a';
            }
        }
        if(i % 2 == 1){
            if(s[i] == 'z'){
                str += 'y';
            }
            else{
                str += 'z';
            }
        }
    }
    cout << str << endl;



}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();




    return 0;
}

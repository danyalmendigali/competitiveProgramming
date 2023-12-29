#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

set<int> st1, st2;
map<int, int> mp1, mp2;
vector<int> ans1, ans2;

void solve()
{
    vector<vector<char>> str(3, vector<char>(3));
    vector<char> res;
    int a = 0, b = 0, c = 0;
    int indI, indJ;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> str[i][j];
            if(str[i][j] == '?'){
                indI = i; indJ = j;
            }
        }
    }
    res.pb(str[0][indJ]); res.pb(str[1][indJ]); res.pb(str[2][indJ]);

    for(int i = 0; i < res.sz; i++){
        if(res[i] == 'A') a++;
        if(res[i] == 'B') b++;
        if(res[i] == 'C') c++;
    }

    if(a == 0){
        cout << "A" << endl;
        return;
    }
    if(b == 0){
        cout << "B" << endl;
        return;
    }
    cout << "C" << endl;


}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();



    return 0;
}

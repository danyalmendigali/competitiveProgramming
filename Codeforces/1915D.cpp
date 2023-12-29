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
    int n; cin >> n;
    string s; cin >> s;
    vector<int> ans;
    string str = "";
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'a' || s[i] == 'e'){
            for(int j = i - 1; j <= i; j++){
                str += s[j];
            }
            i -= 2;
        }
        else{
            for(int j = i - 2; j <= i; j++){
                str += s[j];
            }
            i -= 3;9
        }
        str += '.';
    }
    cout << str << endl;

}


signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

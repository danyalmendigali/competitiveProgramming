#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

vector<bool> was;
vector<int> res1, res2, comp;
set<int> st1, st2;
map<int, int> mp1, mp2;

void solve(){
    string s; cin >> s;
    s += 'A';
    int res = 0;
    if((s[0] < 'A') || (s[0] > 'Z')){
        cout << "NO" << endl;
        return;
    }
    for(int i = 1; i < s.sz; i++){
        if((s[i] >= 'A') && (s[i] <= 'Z')){
            if((res < 1) || (res > 3)){
                cout << "No" << endl;
                return;
            }
            res = 0;
        }

        else{
            res++;
        }
    }
    cout << "Yes" << endl;



}
signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}

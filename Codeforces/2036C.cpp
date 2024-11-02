#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

const ll N = 1e6 + 5;
const ll INF = 1e18;


void solve() {
        string s; cin >> s;
        int s_sz = s.sz;
        int q; cin >> q;

        int cnt = 0;
        for (int i = 0; i <= s_sz - 4; i++) {
            if (s.substr(i, 4) == "1100"){
                cnt++;
            }
        }

        while (q--) {
            int id, v;
            cin >> id >> v;
            id--;

            if (s[id] - '0' == v) {
                if(cnt > 0){
                     cout << "YES" << endl;
                }
                else{
                     cout << "NO" << endl;
                }
                continue;
            }

            for (int i = max(0, id - 3); i <= min(s_sz - 4, id); i++) {
                if (s.substr(i, 4) == "1100") {
                    cnt--;
                }
            }

            s[id] = '0' + v;

            for (int i = max(0, id - 3); i <= min(s_sz - 4, id); i++) {
                if (s.substr(i, 4) == "1100") {
                    cnt++;
                }
            }

            if(cnt > 0){
                     cout << "YES" << endl;
            }
            else{
                     cout << "NO" << endl;
            }
        }
}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
